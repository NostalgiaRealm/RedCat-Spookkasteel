/*
 * FUN_004fd03c at 004fd03c
 * undefined __register FUN_004fd03c(int * param_1)
 * Address ranges: 004fd03c-004fd114;004fd133-004fd254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fd03c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  uint *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  float10 in_ST0;
  undefined4 uStack_34;
  undefined4 *local_30;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 local_28;
  uint *local_24;
  undefined1 *local_20;
  undefined4 *local_c;
  int *local_8;
  
  local_20 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_24 = (uint *)&LAB_004fd255;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_8 = param_1;
  FUN_00403db0((int *)&local_c);
  if (local_8[0x94] == 0) {
    if ((char)local_8[0x9c] == '\0') {
      if (*(char *)((int)local_8 + 0x271) != '\0') {
        uStack_34 = SUB104((float10)*(double *)(local_8 + 0x9a),0);
        local_30 = (undefined4 *)((unkuint10)(float10)*(double *)(local_8 + 0x9a) >> 0x20);
        FUN_0040a970((int *)&local_c);
      }
    }
    else {
      uStack_34 = SUB104((float10)*(double *)(local_8 + 0x98),0);
      local_30 = (undefined4 *)((unkuint10)(float10)*(double *)(local_8 + 0x98) >> 0x20);
      FUN_0040a970((int *)&local_c);
    }
  }
  else {
    FUN_00403e48((int *)&local_c,local_8[0x94]);
  }
  if (local_c == (undefined4 *)0x0) {
    FUN_00403e48((int *)&local_c,0x4fd26c);
  }
  iVar2 = FUN_00404030((int)local_c);
  uVar3 = iVar2 == 0xf;
  if (0xf < iVar2) {
    local_30 = (undefined4 *)&DAT_004fd115;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    FUN_0040ab80((undefined *)local_c);
    *in_FS_OFFSET = uStack_34;
    uStack_34 = SUB104((float10)(double)in_ST0,0);
    local_30 = (undefined4 *)((unkuint10)(float10)(double)in_ST0 >> 0x20);
    uVar3 = 1;
    FUN_0040a9d0(0,0xf,0,(int *)&local_c);
  }
  local_30 = (undefined4 *)0x4fd165;
  FUN_00404238((int)local_c,1,1,(int *)&stack0xffffffe8);
  bVar4 = (byte)unaff_ESI;
  uVar5 = (undefined1)((uint)unaff_ESI >> 8);
  uVar6 = (undefined2)((uint)unaff_ESI >> 0x10);
  local_30 = (undefined4 *)0x4fd17a;
  FUN_00403f58((int *)&stack0xffffffe4,CONCAT31((int3)((uint)local_8 >> 8),(char)local_8[0x95]));
  FUN_00404140((uint *)CONCAT22(uVar6,CONCAT11(uVar5,bVar4)),unaff_EDI);
  if ((bool)uVar3) {
    FUN_0040407c((int *)&local_c,(undefined4 *)&DAT_004fd26c,local_c);
  }
  local_30 = (undefined4 *)0x4fd1ab;
  FUN_00404238((int)local_c,1,2,(int *)&local_20);
  uVar6 = (undefined2)((uint)local_20 >> 0x10);
  local_30 = (undefined4 *)0x4fd1bc;
  FUN_00402bbc((byte *)&local_28,&DAT_004fd270);
  uVar5 = (undefined1)local_8[0x95];
  bVar4 = 1;
  local_30 = (undefined4 *)0x4fd1db;
  FUN_00402b8c((byte *)&local_28,&stack0xffffffd4,2);
  local_30 = (undefined4 *)0x4fd1e6;
  FUN_00403fd4((int *)&local_24,(byte *)&local_28);
  FUN_00404140((uint *)CONCAT22(uVar6,CONCAT11(uVar5,bVar4)),local_24);
  if ((bool)uVar3) {
    bVar4 = (byte)&local_30;
    uVar3 = (undefined1)((uint)&local_30 >> 8);
    uVar6 = (undefined2)((uint)&local_30 >> 0x10);
    local_30 = (undefined4 *)0x4fd1fd;
    uVar1 = FUN_00404030((int)local_c);
    local_30 = (undefined4 *)0x4fd20c;
    FUN_00404238((int)local_c,2,uVar1,(int *)CONCAT22(uVar6,CONCAT11(uVar3,bVar4)));
    FUN_0040407c((int *)&local_c,(undefined4 *)&DAT_004fd27c,local_30);
  }
  (**(code **)(*local_8 + 0xbc))(local_8,local_c);
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_004fd25c;
  local_24 = (uint *)0x4fd23f;
  FUN_00403db0((int *)&local_30);
  local_24 = (uint *)0x4fd24c;
  FUN_00403dd4((int *)&local_24,4);
  local_24 = (uint *)0x4fd254;
  FUN_00403db0((int *)&local_c);
  return;
}

