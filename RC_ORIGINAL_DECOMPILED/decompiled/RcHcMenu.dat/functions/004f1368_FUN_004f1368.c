/*
 * FUN_004f1368 at 004f1368
 * undefined __register FUN_004f1368(int param_1, int * param_2)
 * Address ranges: 004f1368-004f13a1;004f13b6-004f1408
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f1368(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_1c;
  int *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_24 = &LAB_004f1409;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 0x68))();
  switch(*(undefined1 *)(local_8 + 0x4c)) {
  case 0:
    (**(code **)(*local_c + 0x68))();
    break;
  case 1:
    (**(code **)(*local_c + 0x60))();
    break;
  case 2:
    FUN_004054ac((VARIANTARG *)&local_1c.n2,(undefined4 *)0x0);
    FUN_004964d0(local_c,(undefined4 *)&local_1c);
    break;
  case 3:
    FUN_00495b60(local_c);
    break;
  case 4:
    (**(code **)(*local_c + 100))();
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f1410;
  puStack_24 = (undefined1 *)0x4f1408;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

