/*
 * FUN_0049ae44 at 0049ae44
 * undefined __register FUN_0049ae44(int * param_1, int param_2)
 * Address ranges: 0049ae44-0049aeed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049ae44(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  int *piVar2;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_1c = (byte *)0x0;
  puStack_24 = &LAB_0049aeee;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_c = param_2;
  local_8 = param_1;
  FUN_0049aa80(param_1,1,0);
  if ((local_c < 0) || (local_8[0x10] <= local_c)) {
    local_18 = local_c;
    local_14 = 0;
    piVar2 = &local_18;
    in_stack_ffffffd0 = 0;
    FUN_00406a48((undefined4 *)PTR_PTR_005724a8,(int *)&local_1c);
    uVar1 = FUN_0040cf28((int)&DAT_0041a0c8,'\x01',local_1c,in_stack_ffffffd0,piVar2);
    FUN_0040382c(uVar1);
  }
  if (*(char *)(local_8[9] + 0x42c) == '\0') {
    GdiFlush();
  }
  local_10 = local_c * local_8[0x11] + local_8[0x20];
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_0049aef5;
  FUN_00403db0((int *)&local_1c);
  return;
}

