/*
 * FUN_0041afa0 at 0041afa0
 * undefined __register FUN_0041afa0(int param_1, byte * param_2)
 * Address ranges: 0041afa0-0041b073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041afa0(int param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  
  puStack_18 = (undefined1 *)0x41afbb;
  uVar1 = FUN_0041af14(param_2,(uint)*(ushort *)(param_1 + 0x20));
  puStack_18 = (undefined1 *)0x41afc5;
  FUN_0041af88(param_1);
  puStack_1c = &LAB_0041b074;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if ((short)uVar1 == *(short *)(local_c + 3)) {
      uVar2 = FUN_00409738(local_c + 4,(int *)param_2,(uint)*(ushort *)(param_1 + 0x20));
      if ((char)uVar2 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)FUN_004027e8(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *(undefined4 *)param_2;
    *(short *)(local_c + 3) = (short)uVar1;
    FUN_00402944((undefined4 *)param_2,local_c + 4,(uint)*(ushort *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041b07b;
  puStack_1c = (undefined1 *)0x41b073;
  FUN_0041af94(param_1);
  return;
}

