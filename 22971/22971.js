//문제: 22971
const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim().split("\n");

solution(input);
function solution(input) {
  const MOD = 998244353;

  let A = Array(12345).fill(0);
  let dp = Array(12345).fill(1);

  let N = input[0];
  for (let i = 0; i < N; i++) {
    A[i] = input[1];
  }

  for (let i = 1; i < N; i++) {
    for (let j = 0; j < i; j++) {
      if (A[j] < A[i]) {
        dp[i] += dp[j];
        dp[i] %= MOD;
      }
    }
  }

  console.log(dp.join(" "));
}
