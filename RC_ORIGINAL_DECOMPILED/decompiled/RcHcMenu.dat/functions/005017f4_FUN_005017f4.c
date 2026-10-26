/*
 * FUN_005017f4 at 005017f4
 * undefined __register FUN_005017f4(int * param_1, char param_2)
 * Address ranges: 005017f4-0050183b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005017f4(int *param_1,char param_2)

{
  short sVar1;
  
  if ((char)param_1[0x91] != param_2) {
    *(char *)(param_1 + 0x91) = param_2;
    sVar1 = (**(code **)(*param_1 + 0x118))(param_1,(char)param_1[0x91]);
    FUN_00432904((int)param_1,sVar1);
  }
  return;
}

