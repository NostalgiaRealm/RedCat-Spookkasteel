/*
 * FUN_0040f7c8 at 0040f7c8
 * undefined __register FUN_0040f7c8(char * param_1, uint param_2, int * param_3)
 * Address ranges: 0040f7c8-0040f88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040f7c8(char *param_1,uint param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0040f88c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_1 == "\x03\aBoolean\x01") {
    puStack_18 = &stack0xfffffffc;
    FUN_00403e04(param_3,(undefined4 *)(&PTR_s_False_0056f378)[param_2 & 0xff]);
    iVar1 = FUN_00409758(*(char **)PTR_PTR_0057257c,"0x");
    if (iVar1 == 0) {
      FUN_004096cc((byte *)*param_3,(int *)&local_8);
      FUN_00403e04(param_3,local_8);
    }
  }
  else if (*param_1 == '\x01') {
    puStack_18 = &stack0xfffffffc;
    FUN_00409bd8(param_2,param_3);
  }
  else {
    iVar1 = FUN_0040f7bc((int)param_1);
    iVar1 = FUN_0040f7bc(**(int **)(iVar1 + 9));
    if (*(int *)(iVar1 + 1) < 0) {
      param_2 = (uint)(param_2 != 0);
    }
    pbVar2 = (byte *)(iVar1 + 0xd);
    for (; param_2 != 0; param_2 = param_2 - 1) {
      pbVar2 = pbVar2 + *pbVar2 + 1;
    }
    FUN_00403fd4(param_3,pbVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040f893;
  puStack_1c = (undefined1 *)0x40f88b;
  FUN_00403db0((int *)&local_8);
  return;
}

