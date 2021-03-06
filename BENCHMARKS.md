# Benchmarks

``` ini
BenchmarkDotNet=v0.11.1, OS=Windows 10.0.17134.228 (1803/April2018Update/Redstone4)
Intel Core i7-6700HQ CPU 2.60GHz (Skylake), 1 CPU, 8 logical and 4 physical cores
Frequency=2531246 Hz, Resolution=395.0624 ns, Timer=TSC
.NET Core SDK=2.1.400
  [Host]     : .NET Core 2.1.2 (CoreCLR 4.6.26628.05, CoreFX 4.6.26629.01), 64bit RyuJIT
  DefaultJob : .NET Core 2.1.2 (CoreCLR 4.6.26628.05, CoreFX 4.6.26629.01), 64bit RyuJIT
```

#### Factorial (1 iteration)

You could get the source [here](https://github.com/CityOfZion/neo-hypervm/blob/development/tests/Neo.HyperVM.Benchmarks/Benchmarks/VMBenchmarkFACTORIAL.cs)

<table>
<thead>
<tr><th>Method</th><th>Mean</th><th>Error</th><th>StdDev</th><th>Min</th><th>Max</th><th>Median</th><th>Rank</th></tr>
</thead>
<tbody>

<tr><td>HyperVM</td><td>155.0 us</td><td>2.740 us</td><td>2.563 us</td><td>152.0 us</td><td>158.5 us</td><td>156.4 us</td><td>1</td>
</tr><tr><td>NeoVM</td><td>370.0 us</td><td>4.978 us</td><td>4.656 us</td><td>360.6 us</td><td>375.0 us</td><td>371.5 us</td><td>2</td>
</tr><tr><td>ApplicationEngine</td><td>835.7 us</td><td>3.422 us</td><td>3.033 us</td><td>832.2 us</td><td>842.4 us</td><td>834.8 us</td><td>3</td>
</tr>

</tbody></table>

<p align="center">
<img src="https://github.com/CityOfZion/neo-hypervm/raw/development/images/Neo.HyperVM.Benchmarks.VMBenchmarkFACTORIAL-barplot.jpg" width="300">
</p>

#### Fibonacci (1 iteration)

You could get the source [here](https://github.com/CityOfZion/neo-hypervm/blob/development/tests/Neo.HyperVM.Benchmarks/Benchmarks/VMBenchmarkFB.cs)

<table>
<thead>
<tr><th>Method</th><th>Mean</th><th>Error</th><th>StdDev</th><th>Min</th><th>Max</th><th>Median</th><th>Rank</th></tr>
</thead>
<tbody>

<tr><td>HyperVM</td><td>71.05 ms</td><td>0.2146 ms</td><td>0.2008 ms</td><td>70.64 ms</td><td>71.43 ms</td><td>71.01 ms</td><td>1</td>
</tr><tr><td>NeoVM</td><td>219.39 ms</td><td>3.2529 ms</td><td>3.0428 ms</td><td>215.43 ms</td><td>223.30 ms</td><td>220.91 ms</td><td>2</td>
</tr><tr><td>ApplicationEngine</td><td>425.10 ms</td><td>1.4836 ms</td><td>1.3877 ms</td><td>422.33 ms</td><td>426.93 ms</td><td>424.94 ms</td><td>3</td>
</tr>

</tbody></table>

<p align="center">
<img src="https://github.com/CityOfZion/neo-hypervm/raw/development/images/Neo.HyperVM.Benchmarks.VMBenchmarkFB-barplot.jpg" width="300">
</p>

#### NOP (1000 iterations)

You could get the source [here](https://github.com/CityOfZion/neo-hypervm/blob/development/tests/Neo.HyperVM.Benchmarks/Benchmarks/VMBenchmarkNOP.cs)

<table>
<thead>
<tr><th>Method</th><th>Mean</th><th>Error</th><th>StdDev</th><th>Min</th><th>Max</th><th>Median</th><th>Rank</th></tr>
</thead>
<tbody>

<tr><td>HyperVM</td><td>8.710 us</td><td>0.1290 us</td><td>0.1207 us</td><td>8.491 us</td><td>8.909 us</td><td>8.674 us</td><td>1</td>
</tr><tr><td>NeoVM</td><td>76.813 us</td><td>1.4280 us</td><td>1.4025 us</td><td>74.833 us</td><td>78.383 us</td><td>77.630 us</td><td>2</td>
</tr><tr><td>ApplicationEngine</td><td>154.212 us</td><td>2.3578 us</td><td>2.2054 us</td><td>150.994 us</td><td>156.369 us</td><td>155.476 us</td><td>3</td>
</tr>

</tbody></table>

<p align="center">
<img src="https://github.com/CityOfZion/neo-hypervm/raw/development/images/Neo.HyperVM.Benchmarks.VMBenchmarkNOP-barplot.jpg" width="300">
</p>

#### PUSH0+DROP (1000 iterations)

You could get the source [here](https://github.com/CityOfZion/neo-hypervm/blob/development/tests/Neo.HyperVM.Benchmarks/Benchmarks/VMBenchmarkPUSH0.cs)

<table>
<thead>
<tr><th>Method</th><th>Mean</th><th>Error</th><th>StdDev</th><th>Min</th><th>Max</th><th>Median</th><th>Rank</th></tr>
</thead>
<tbody>

<tr><td>HyperVM</td><td>77.03 us</td><td>0.8370 us</td><td>0.7830 us</td><td>74.46 us</td><td>77.87 us</td><td>77.11 us</td><td>1</td>
</tr><tr><td>NeoVM</td><td>178.27 us</td><td>2.2009 us</td><td>2.0587 us</td><td>172.49 us</td><td>180.58 us</td><td>178.53 us</td><td>2</td>
</tr><tr><td>ApplicationEngine</td><td>358.92 us</td><td>0.9572 us</td><td>0.8954 us</td><td>357.71 us</td><td>361.06 us</td><td>358.85 us</td><td>3</td>
</tr>

</tbody></table>

<p align="center">
<img src="https://github.com/CityOfZion/neo-hypervm/raw/development/images/Neo.HyperVM.Benchmarks.VMBenchmarkPUSH0-barplot.jpg" width="300">
</p>

# Cryptography Benchmarks

*Made with Linux OpenSSL version*

``` ini
BenchmarkDotNet=v0.11.1, OS=ubuntu 16.04
Intel Core i7-6700HQ CPU 2.60GHz (Skylake), 1 CPU, 8 logical and 4 physical cores
.NET Core SDK=2.1.400
  [Host]     : .NET Core 2.1.2 (CoreCLR 4.6.26628.05, CoreFX 4.6.26629.01), 64bit RyuJIT
  DefaultJob : .NET Core 2.1.2 (CoreCLR 4.6.26628.05, CoreFX 4.6.26629.01), 64bit RyuJIT
```

#### VERIFY (1000 iterations)

You could get the source [here](https://github.com/CityOfZion/neo-hypervm/blob/development/tests/Neo.HyperVM.Benchmarks/Benchmarks/VMBenchmarkVERIFY.cs)

<table>
<thead>
<tr><th>Method</th><th>Mean</th><th>Error</th><th>StdDev</th><th>Min</th><th>Max</th><th>Median</th><th>Rank</th></tr>
</thead>
<tbody>
  
<tr><td>HyperVM</td><td>146.8 ms</td><td>2.531 ms</td><td>2.367 ms</td><td>143.5 ms</td><td>150.1 ms</td><td>148.1 ms</td><td>1</td>
</tr><tr><td>NeoVM</td><td>355.8 ms</td><td>6.106 ms</td><td>5.711 ms</td><td>347.3 ms</td><td>361.3 ms</td><td>359.2 ms</td><td>2</td>
</tr><tr><td>ApplicationEngine</td><td>358.6 ms</td><td>5.687 ms</td><td>5.320 ms</td><td>348.5 ms</td><td>365.5 ms</td><td>360.2 ms</td><td>2</td>
</tr>

</tbody></table>

#### SHA1 (1000 iterations)

You could get the source [here](https://github.com/CityOfZion/neo-hypervm/blob/development/tests/Neo.HyperVM.Benchmarks/Benchmarks/VMBenchmarkSHA1.cs)

<table>
<thead>
<tr><th>Method</th><th>Mean</th><th>Error</th><th>StdDev</th><th>Min</th><th>Max</th><th>Median</th><th>Rank</th></tr>
</thead>
<tbody>

<tr><td>HyperVM</td><td>410.5 us</td><td>0.8861 us</td><td>0.7855 us</td><td>409.3 us</td><td>412.1 us</td><td>410.4 us</td><td>1</td>
</tr><tr><td>NeoVM</td><td>1,444.2 us</td><td>21.5948 us</td><td>18.0326 us</td><td>1,402.7 us</td><td>1,461.2 us</td><td>1,448.5 us</td><td>2</td>
</tr><tr><td>ApplicationEngine</td><td>1,726.0 us</td><td>21.7094 us</td><td>19.2448 us</td><td>1,681.5 us</td><td>1,742.0 us</td><td>1,732.0 us</td><td>3</td>
</tr>

</tbody></table>

# Notes

*NeoVM and ApplicationEngine come form NEO 3.0 binaries*
