/*
 * FUN_00569ff4 at 00569ff4
 * undefined __register FUN_00569ff4(int * param_1)
 * Address ranges: 00569ff4-0056a675
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569ff4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_120 [256];
  int local_20;
  undefined4 *local_1c;
  int local_18 [4];
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_20 = 0;
  puStack_128 = &LAB_0056a676;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_120);
  FUN_00403fd4(&local_20,local_120);
  FUN_004040f0((int *)&local_1c,3);
  puVar1 = local_1c;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_00569ccc(local_8,local_8[0x14],(undefined4 *)&DAT_0056a6b4);
  FUN_00569ccc(local_8,local_8[0x15],(undefined4 *)&DAT_0056a6c4);
  FUN_00569ccc(local_8,local_8[0x16],(undefined4 *)&DAT_0056a6d4);
  FUN_00569ccc(local_8,local_8[0x17],(undefined4 *)&DAT_0056a6c4);
  FUN_00569ccc(local_8,local_8[0x18],(undefined4 *)&DAT_0056a6e4);
  FUN_00569ccc(local_8,local_8[0x19],(undefined4 *)&DAT_0056a6f4);
  FUN_00569ccc(local_8,local_8[0x1a],(undefined4 *)&DAT_0056a704);
  FUN_00569ccc(local_8,local_8[0x36],(undefined4 *)&DAT_0056a714);
  FUN_00569ccc(local_8,local_8[0x1b],(undefined4 *)&DAT_0056a724);
  FUN_00569ccc(local_8,local_8[0x1c],(undefined4 *)&DAT_0056a734);
  FUN_00569ccc(local_8,local_8[0x1d],(undefined4 *)&DAT_0056a744);
  FUN_00569ccc(local_8,local_8[0x1e],(undefined4 *)&DAT_0056a754);
  FUN_00569ccc(local_8,local_8[0x1f],(undefined4 *)&DAT_0056a764);
  FUN_00569ccc(local_8,local_8[0x20],(undefined4 *)&DAT_0056a774);
  FUN_00569ccc(local_8,local_8[0x21],(undefined4 *)&DAT_0056a784);
  FUN_00569ccc(local_8,local_8[0x26],(undefined4 *)&DAT_0056a744);
  FUN_00569ccc(local_8,local_8[0x27],(undefined4 *)&DAT_0056a754);
  FUN_00569ccc(local_8,local_8[0x28],(undefined4 *)&DAT_0056a764);
  FUN_00569ccc(local_8,local_8[0x29],(undefined4 *)&DAT_0056a774);
  FUN_00569ccc(local_8,local_8[0x2a],(undefined4 *)&DAT_0056a784);
  FUN_00569ccc(local_8,local_8[0x2b],(undefined4 *)&DAT_0056a794);
  FUN_00569ccc(local_8,local_8[0x2c],(undefined4 *)&DAT_0056a7a4);
  FUN_00569ccc(local_8,local_8[0x2d],(undefined4 *)&DAT_0056a7b4);
  FUN_00569ccc(local_8,local_8[0x2e],(undefined4 *)&DAT_0056a7c4);
  FUN_00569ccc(local_8,local_8[0x37],(undefined4 *)&DAT_0056a7d4);
  FUN_00569ccc(local_8,local_8[0x2f],(undefined4 *)&DAT_0056a7e4);
  FUN_00569ccc(local_8,local_8[0x30],(undefined4 *)&DAT_0056a7f4);
  FUN_00569ccc(local_8,local_8[0x31],(undefined4 *)&DAT_0056a804);
  FUN_00569ccc(local_8,local_8[0x32],(undefined4 *)&DAT_0056a814);
  FUN_00569ccc(local_8,local_8[0x33],(undefined4 *)&DAT_0056a824);
  FUN_00569ccc(local_8,local_8[0x34],(undefined4 *)&DAT_0056a834);
  FUN_00569ccc(local_8,local_8[0x35],(undefined4 *)&DAT_0056a844);
  FUN_00569ccc(local_8,local_8[0x22],(undefined4 *)&DAT_0056a854);
  FUN_00569ccc(local_8,local_8[0x23],(undefined4 *)&DAT_0056a864);
  FUN_00569ccc(local_8,local_8[0x24],(undefined4 *)&DAT_0056a874);
  FUN_00569ccc(local_8,local_8[0x25],(undefined4 *)&DAT_0056a880);
  FUN_00569ccc(local_8,local_8[0x38],(undefined4 *)&DAT_0056a890);
  FUN_00569ccc(local_8,local_8[0x39],(undefined4 *)&DAT_0056a8a0);
  FUN_00569ccc(local_8,local_8[0x3a],(undefined4 *)&DAT_0056a8b0);
  FUN_00569ccc(local_8,local_8[0x3b],(undefined4 *)&DAT_0056a8c0);
  FUN_00569ccc(local_8,local_8[0x3c],(undefined4 *)&DAT_0056a8d0);
  FUN_00569ccc(local_8,local_8[0x3d],(undefined4 *)&DAT_0056a8e0);
  local_18[0] = 0x3c;
  local_18[2] = 0xf;
  local_18[1] = 0;
  local_18[3] = 0;
  FUN_00569f2c(local_8,local_8[0x14],local_18);
  FUN_00569f2c(local_8,local_8[0x15],local_18);
  FUN_00569f2c(local_8,local_8[0x16],local_18);
  FUN_00569f2c(local_8,local_8[0x17],local_18);
  FUN_00569f2c(local_8,local_8[0x18],local_18);
  FUN_00569f2c(local_8,local_8[0x19],local_18);
  FUN_00569f2c(local_8,local_8[0x1a],local_18);
  FUN_00569f2c(local_8,local_8[0x36],local_18);
  FUN_00569f2c(local_8,local_8[0x1b],local_18);
  FUN_00569f2c(local_8,local_8[0x1c],local_18);
  FUN_00569f2c(local_8,local_8[0x22],local_18);
  FUN_00569f2c(local_8,local_8[0x23],local_18);
  local_18[0] = 0;
  local_18[2] = 0;
  local_18[1] = 0;
  local_18[3] = 0x10;
  FUN_00569f2c(local_8,local_8[0x1d],local_18);
  FUN_00569f2c(local_8,local_8[0x1e],local_18);
  FUN_00569f2c(local_8,local_8[0x1f],local_18);
  FUN_00569f2c(local_8,local_8[0x20],local_18);
  FUN_00569f2c(local_8,local_8[0x21],local_18);
  FUN_00569f2c(local_8,local_8[0x26],local_18);
  FUN_00569f2c(local_8,local_8[0x27],local_18);
  FUN_00569f2c(local_8,local_8[0x28],local_18);
  FUN_00569f2c(local_8,local_8[0x29],local_18);
  FUN_00569f2c(local_8,local_8[0x2a],local_18);
  FUN_00569f2c(local_8,local_8[0x2b],local_18);
  FUN_00569f2c(local_8,local_8[0x2c],local_18);
  FUN_00569f2c(local_8,local_8[0x2d],local_18);
  FUN_00569f2c(local_8,local_8[0x2e],local_18);
  FUN_00569f2c(local_8,local_8[0x37],local_18);
  FUN_00569f2c(local_8,local_8[0x2f],local_18);
  FUN_00569f2c(local_8,local_8[0x38],local_18);
  FUN_00569f2c(local_8,local_8[0x39],local_18);
  FUN_00569f2c(local_8,local_8[0x3a],local_18);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "ReadDefGraphics";
  FUN_00403dd4(&local_20,2);
  return;
}

