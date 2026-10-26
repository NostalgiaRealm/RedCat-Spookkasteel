/*
 * FUN_0048d53c at 0048d53c
 * undefined __register FUN_0048d53c(int param_1, byte * param_2)
 * Address ranges: 0048d53c-0048d710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d53c(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  byte **ppbVar7;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_18;
  byte *local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (byte *)0x0;
  local_18 = (byte *)0x0;
  puStack_20 = &LAB_0048d711;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_00404030(param_1);
  if (iVar2 < 1) {
    piVar3 = FUN_0040ceec((int *)&DAT_0040911c,'\x01',
                          (undefined4 *)"StringToPropRef: Can not convert an empty string");
    FUN_0040382c(piVar3);
  }
  FUN_0048e078((undefined4 *)local_c);
  FUN_00403e48((int *)&local_18,local_8);
  local_10 = FUN_0040431c("_",(char *)local_18);
  while (local_10 != 0) {
    ppbVar7 = &local_14;
    uVar6 = local_10 - 1;
    if (SBORROW4(local_10,1)) {
      thunk_FUN_00402874((uint)ppbVar7);
      uVar6 = extraout_ECX;
    }
    FUN_00404238((int)local_18,1,uVar6,(int *)ppbVar7);
    ppbVar7 = &local_18;
    uVar4 = FUN_00404030((int)local_18);
    uVar6 = uVar4 - local_10;
    if (SBORROW4(uVar4,local_10)) {
      uVar4 = thunk_FUN_00402874(uVar4);
      uVar6 = extraout_ECX_00;
    }
    iVar2 = local_10 + 1;
    if (SCARRY4(local_10,1)) {
      thunk_FUN_00402874(uVar4);
      uVar6 = extraout_ECX_01;
      iVar2 = extraout_EDX;
    }
    FUN_00404238((int)local_18,iVar2,uVar6,(int *)ppbVar7);
    iVar2 = FUN_00409c44(local_14);
    uVar6 = iVar2 + 0x8000;
    if (0xffff < uVar6) {
      uVar6 = thunk_FUN_00402874(uVar6);
    }
    *(short *)(local_c + (uint)*local_c * 2 + 2) = (short)uVar6 + -0x8000;
    bVar1 = *local_c;
    *local_c = *local_c + 1;
    pbVar5 = local_c;
    if (SCARRY1(bVar1,'\x01')) {
      pbVar5 = (byte *)thunk_FUN_00402874((uint)local_c);
    }
    if (9 < (uint)(int)(char)*pbVar5) {
      thunk_FUN_00402874((int)(char)*pbVar5);
    }
    if (10 < *local_c) {
      FUN_00403d94("StringToPropRef: invalid string");
    }
    local_10 = FUN_0040431c("_",(char *)local_18);
  }
  iVar2 = FUN_00409c44(local_18);
  uVar6 = iVar2 + 0x8000;
  if (0xffff < uVar6) {
    uVar6 = thunk_FUN_00402874(uVar6);
  }
  *(short *)(local_c + (uint)*local_c * 2 + 2) = (short)uVar6 + -0x8000;
  bVar1 = *local_c;
  *local_c = *local_c + 1;
  pbVar5 = local_c;
  if (SCARRY1(bVar1,'\x01')) {
    pbVar5 = (byte *)thunk_FUN_00402874((uint)local_c);
  }
  if (9 < (uint)(int)(char)*pbVar5) {
    thunk_FUN_00402874((int)(char)*pbVar5);
  }
  if (*local_c == 0) {
    FUN_00403d94("StringToPropRef: invalid string");
  }
  if (10 < *local_c) {
    FUN_00403d94("StringToPropRef: invalid string");
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0048d718;
  puStack_20 = (undefined1 *)0x48d710;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

