/*
 * FUN_00482d18 at 00482d18
 * undefined __register FUN_00482d18(int * param_1, char param_2)
 * Address ranges: 00482d18-00482db8;00482dd5-00482deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482d18(int *param_1,char param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (param_2 == '\0') {
    puStack_18 = (undefined1 *)0x482d52;
    iVar1 = FUN_004804cc(DAT_0057394c,(undefined *)param_1[0x21]);
    uVar2 = extraout_ECX_00;
  }
  else {
    puStack_18 = (undefined1 *)0x482d3b;
    iVar1 = FUN_00480448(DAT_0057394c,(undefined *)param_1[0x21]);
    uVar2 = extraout_ECX;
  }
  if ((iVar1 != 0) && (iVar1 != param_1[0x1e])) {
    if (param_1[0x1e] != 0) {
      puStack_18 = (undefined1 *)0x482d72;
      FUN_00481d10(param_1[0x1e],(int)param_1);
      uVar2 = extraout_ECX_01;
    }
    param_1[0x1e] = iVar1;
    puStack_18 = (undefined1 *)0x482d82;
    FUN_00418fe0(iVar1,(int)param_1,uVar2);
    puStack_18 = (undefined1 *)0x482d90;
    FUN_00480640(param_1[0x1e],(int)param_1);
    puStack_1c = &LAB_00482db9;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00483cd0(param_1,(undefined *)param_1[0x22]);
    *in_FS_OFFSET = uStack_20;
  }
  if (param_2 != '\0') {
    puStack_18 = (undefined1 *)0x482de6;
    FUN_00481e4c(param_1[0x1e],'\x01');
  }
  return;
}

