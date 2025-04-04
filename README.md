# Optimized operators for [HyTeG](https://i10git.cs.fau.de/hyteg/hyteg)

This repository contains optimized elementwise operators for [HyTeG](https://i10git.cs.fau.de/hyteg/hyteg).
The code under [operators](operators) is generated using [HOG](https://i10git.cs.fau.de/hyteg/hog).
Each kernel has a platform independent and, where applicable, an AVX-vectorized version.
The desired variant is configured in CMake.

All operators are described declaratively in `operators-<operator-group>.toml`.
They are roughly split into groups for a better overview and faster integration tests.

## How to generate operators

```sh
cd generate

python -m venv .venv
source .venv/bin/activate
python -m pip install -r requirements.txt

python generate.py -o ../operators ../operators-<operator-group>.toml

# To generate all operators you have to run the script repeatedly, each time with a different toml file.
```

## Intended development workflow

Adding a new operator is as easy as adjusting one of the existing `operators-<operator-group>.toml` files, or adding a new one.
If you want to update the generator, make the necessary changes in the `generate` directory.
It is a good idea to test your changes locally.
In your commit, do not include changes to the `operators` directory.
After pushing your changes to the remote, our CI automatically regenerates all operators from all `operators-<operator-group>.toml` files present in the repository.
In this process, any changes you made under `operators` will be lost.
After the pipeline has passed, you can trigger the manual job `submit-merge-request` to create a new merge request including your changes and the freshly generated operators.
Using the CI makes sure that the generated code is always in sync with the description of what and how to generate.
