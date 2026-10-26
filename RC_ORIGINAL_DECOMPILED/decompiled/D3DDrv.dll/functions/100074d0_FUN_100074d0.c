/*
 * FUN_100074d0 at 100074d0
 * undefined4 __cdecl FUN_100074d0(undefined4 param_1)
 * Address ranges: 100074d0-10007543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100074d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  switch(param_1) {
  case 3:
  case 5:
    puVar2 = &DAT_10027550;
    puVar3 = &DAT_101271e8;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  default:
    FUN_10005350(7,s_SetupCurrent3dDesc__Invalid_pixe_10015630);
    return 0;
  case 7:
    puVar2 = &DAT_100275cc;
    puVar3 = &DAT_101271e8;
    break;
  case 8:
    puVar2 = &DAT_10027648;
    puVar3 = &DAT_101271e8;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}

