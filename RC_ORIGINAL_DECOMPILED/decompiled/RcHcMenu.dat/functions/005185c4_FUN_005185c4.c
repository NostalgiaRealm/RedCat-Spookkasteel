/*
 * FUN_005185c4 at 005185c4
 * undefined __register FUN_005185c4(int * param_1, int param_2)
 * Address ranges: 005185c4-005186ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot 50 for TDaviGlyphButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot 50 for
   TDaviGlyphButton2. Original bytes unchanged; names and types still inferred. */

void FUN_005185c4(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_005186ad;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    piVar2 = FUN_00517c90();
    iVar3 = FUN_0041300c(piVar2[9]);
    puVar1 = puStack_114;
    if (local_c < iVar3) goto LAB_0051863b;
  }
  puStack_114 = puVar1;
  FUN_00402fe0(*local_8,local_110);
  FUN_00403fd4(&local_10,local_110);
  FUN_00404038(&local_10,(undefined4 *)".LoadPropertiesFromKind: Index out of range.");
  FUN_00403d94(local_10);
LAB_0051863b:
  piVar2 = FUN_00517c90();
  iVar3 = FUN_00517e88(piVar2[9],local_c);
  FUN_00518254((int)local_8,*(undefined4 *)(iVar3 + 0x14));
  piVar2 = FUN_00517c90();
  iVar3 = FUN_00517e88(piVar2[9],local_c);
  FUN_00432744((int)local_8,*(uint **)(iVar3 + 0xc));
  piVar2 = FUN_00517c90();
  iVar3 = FUN_00517e88(piVar2[9],local_c);
  FUN_00403e04(local_8 + 0x1c,*(undefined4 **)(iVar3 + 0x18));
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_005186b4;
  puStack_118 = (undefined1 *)0x5186ac;
  FUN_00403db0(&local_10);
  return;
}

