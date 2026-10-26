/*
 * FUN_0042bcec at 0042bcec
 * bool __register FUN_0042bcec(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0042bcec-0042bd15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0042bcec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403270(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return true;
  }
  return (char)param_1[0x7e] != '\x01';
}

