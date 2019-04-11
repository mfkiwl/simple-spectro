# Phenolphathalein

Kinetic of degration of phenolphthalein in basic media work well as shown in the [previous experiment](../20190406/README.md).

## Goal

We want to measure the order of the reaction and in the literature you are expected to use constant ionic force. But is this necessary ?

Let's check if we replace NaCl 0.3M by water to see if it yields to the same result.

## Solutions

- solution A: NaOH 0.3M in water
- solution B: water
- solution C: phenolphthalein 3.02 g/L in MeOH / EtOH

| Experiment | A    | B    | C     |
| ---------- | ---- | ---- | ----- |
| 1          | 4 mL | 0 mL | 40 µL |
| 2          | 3 mL | 1 mL | 20 µL |
| 3          | 2 mL | 2 mL | 20 µL |
| 4          | 1 mL | 3 mL | 20 µL |

## Results

Raw data for the 4 kinetics are in the attached corresponding documents:

- [Experiment 1](exp1.txt)
- [Experiment 2](exp2.txt)
- [Experiment 3](exp3.txt)
- [Experiment 4](exp4.txt)

The data were processed online on the [following page](https://www.cheminfo.org/?viewURL=https%3A%2F%2Fcouch.cheminfo.org%2Fcheminfo-public%2F7b6eb01da45510275179c4b587bb63f0%2Fview.json&loadversion=true&fillsearch=Analyse+spectro+log).

An exponential regression has been applied for the 4 experiments and the following results are observed:

We still need to redo the analysis and discuss about which point should be taken into account.

| Experiment | [NaOH]  | [NaOH]<sub>0</sub> | k      | r<sup>2</sup> |
| ---------- | ------- | ------------------ | ------ | ------------- |
| 1          | 0.300 M | 0.3482             | 0.2869 | 0.99998       |
| 2          | 0.225 M | 0.4614             | 0.1959 | 0.99980       |
| 3          | 0.150 M | 0.5934             | 0.1166 | 0.99949       |
| 4          | 0.075 M | 0.6932             | 0.0460 | 0.99938       |

## What is r<sup>2</sup> ???