# Optimized operators for [HyTeG](https://i10git.cs.fau.de/hyteg/hyteg)

This repository contains optimized elementwise operators for [HyTeG](https://i10git.cs.fau.de/hyteg/hyteg).
The code under [operators](operators) is generated using the [HOG](https://i10git.cs.fau.de/hyteg/hog).
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
