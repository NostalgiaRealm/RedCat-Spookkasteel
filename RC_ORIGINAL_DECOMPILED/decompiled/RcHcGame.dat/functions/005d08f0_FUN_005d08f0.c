/*
 * FUN_005d08f0 at 005d08f0
 * undefined FUN_005d08f0(void)
 * Address ranges: 005d08f0-005d09cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d08f0(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_c [12];
  
  if (0x1f < param_3) {
    return 0;
  }
  piVar4 = param_1 + 1;
  *param_1 = 0;
  if (0 < param_3) {
    iVar3 = 1;
    do {
      iVar2 = FUN_005b2ec0(0x3dcccccd);
      if (iVar2 == 0) {
        FUN_005b2fe0(local_c);
        FUN_005b2e60(piVar4);
        FUN_005b2f20();
        piVar4[3] = 0;
        piVar4[4] = 6;
        piVar4 = piVar4 + 5;
        *param_1 = *param_1 + 1;
      }
      bVar1 = iVar3 < param_3;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  FUN_005d0c90(param_1);
  return 1;
}

