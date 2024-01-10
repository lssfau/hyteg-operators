# Optimized operators for [HyTeG](https://i10git.cs.fau.de/hyteg/hyteg)

This repository contains optimized elementwise operators for [HyTeG](https://i10git.cs.fau.de/hyteg/hyteg).
The code under [operators](operators) is generated using [HFG](https://i10git.cs.fau.de/terraneo/hyteg-form-generator).
Each kernel has a platform independent and, where applicable, an AVX-vectorized version.
The desired variant is configured in CMake.

All operators are described declaratively in [operators.toml](operators.toml).

## How to generate operators

```sh
cd generate

python -m venv .venv
source .venv/bin/activate
python -m pip install -r requirements.txt

python generate.py -o ../operators ../operators.toml
```
