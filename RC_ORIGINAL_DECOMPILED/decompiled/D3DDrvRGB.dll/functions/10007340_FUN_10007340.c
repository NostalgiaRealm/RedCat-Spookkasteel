/*
 * FUN_10007340 at 10007340
 * undefined4 __cdecl FUN_10007340(undefined4 param_1)
 * Address ranges: 10007340-100073a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007340(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  switch(param_1) {
  case 3:
  case 5:
    puVar2 = &DAT_1001bd68;
    break;
  default:
    FUN_10005e40(7,s_SetupCurrent3dDesc__Invalid_pixe_10018b34);
    return 0;
  case 7:
    puVar2 = &DAT_1001bde4;
    break;
  case 8:
    puVar2 = &DAT_1001be60;
  }
  puVar3 = &DAT_10028b00;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  _DAT_10028b6c = 0x10;
  return 1;
}

