/*
 * FUN_004861e4 at 004861e4
 * undefined __register FUN_004861e4(int * param_1, char param_2, char param_3)
 * Address ranges: 004861e4-004862cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004861e4(int *param_1,char param_2,char param_3)

{
  uint uVar1;
  int *in_FS_OFFSET;
  int iStack_30;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4861fb;
  FUN_00473b1c(param_1);
  puStack_14 = (undefined1 *)0x486206;
  (**(code **)(*param_1 + 0xfc))();
  puStack_14 = (undefined1 *)0x486210;
  FUN_0047135c((int)param_1,0);
  puStack_14 = (undefined1 *)0x486218;
  FUN_00473130(param_1);
  puStack_14 = (undefined1 *)0x486220;
  FUN_00473148((int)param_1);
  if ((char)param_1[0x26] == '\0') {
    puStack_14 = (undefined1 *)0x486234;
    FUN_00485c6c((int)param_1);
  }
  puStack_18 = &LAB_004862ce;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  if (param_3 == '\0') {
    puStack_14 = &stack0xfffffffc;
    if (param_2 != '\0') {
      puStack_14 = &stack0xfffffffc;
      uVar1 = thunk_FUN_00479ca6(param_1[0x5a]);
      FUN_0047fe48(uVar1);
    }
    iStack_30 = param_1[0x5a];
    thunk_FUN_00479c94(iStack_30);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    if (param_2 != '\0') {
      puStack_14 = &stack0xfffffffc;
      uVar1 = thunk_FUN_00479cac(param_1[0x5a]);
      FUN_0047fe48(uVar1);
    }
    iStack_30 = param_1[0x5a];
    thunk_FUN_00479c9a(iStack_30);
  }
  *in_FS_OFFSET = iStack_30;
  if ((char)param_1[0x26] == '\0') {
    FUN_00485d28((int)param_1);
  }
  return;
}

