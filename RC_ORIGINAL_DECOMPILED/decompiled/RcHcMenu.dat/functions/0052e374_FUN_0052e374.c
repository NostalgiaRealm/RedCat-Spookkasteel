/*
 * FUN_0052e374 at 0052e374
 * undefined __register FUN_0052e374(undefined4 param_1, char param_2)
 * Address ranges: 0052e374-0052e3b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052e374(undefined4 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_0052e18c();
  }
  else if (param_2 == '\x01') {
    FUN_0052e34c();
  }
  else {
    FUN_00403d94("Assertion failure");
  }
  return;
}

