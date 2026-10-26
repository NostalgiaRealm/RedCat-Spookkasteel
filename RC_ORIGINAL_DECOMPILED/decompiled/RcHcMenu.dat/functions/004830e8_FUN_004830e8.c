/*
 * FUN_004830e8 at 004830e8
 * undefined __register FUN_004830e8(int param_1, int * param_2)
 * Address ranges: 004830e8-004831ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004830e8(int param_1,int *param_2)

{
  char cVar1;
  int *in_FS_OFFSET;
  int in_stack_ffffffcc;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (byte *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_004831ac;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_2c;
  if (*(short *)(param_1 + 0x92) == 0) {
    FUN_00413a08(param_2,"USER NAME",&local_8);
    in_stack_ffffffcc = 0x483144;
    cVar1 = FUN_0047cfb4(*(uint **)(param_1 + 0x88),&local_8,&local_c,'\0');
    if (cVar1 == '\0') {
      in_stack_ffffffcc = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_005725c8,(int *)&local_10);
      local_18 = *(undefined4 *)(param_1 + 0x88);
      local_14 = CONCAT31(local_14._1_3_,0xb);
      FUN_00466e30(local_10,&local_18,0,in_stack_ffffffcc);
    }
    FUN_004140d0(param_2,"USER NAME",local_8);
    FUN_004140d0(param_2,"PASSWORD",local_c);
  }
  else {
    puStack_24 = &stack0xfffffffc;
    (**(code **)(param_1 + 0x90))(*(undefined4 *)(param_1 + 0x94),param_1,param_2);
  }
  *in_FS_OFFSET = in_stack_ffffffcc;
  puStack_2c = &LAB_004831b3;
  FUN_00403dd4((int *)&local_10,3);
  return;
}

