/*
 * FUN_005c0240 at 005c0240
 * undefined FUN_005c0240(void)
 * Address ranges: 005c0240-005c02a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c0240(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_005c0170();
  if (iVar1 == 0) {
    return 0;
  }
  piVar3 = (int *)(iVar1 + 4);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_1;
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 1;
  }
  iVar2 = *(int *)(iVar1 + 4);
  if (*(int *)(iVar1 + 0xc) < iVar2) {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (*(int *)(iVar1 + 0x24) != 0) {
    FUN_005c4b80();
  }
  if (*(int *)(iVar1 + 0x10) == 0x14) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xe2,
                 &DAT_006b3f70,0);
    return 0;
  }
  return iVar1;
}

