/*
 * FUN_00483324 at 00483324
 * undefined __register FUN_00483324(int param_1, int * param_2)
 * Address ranges: 00483324-0048358a;00483592-00483603;0048360b-00483635
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483324(int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined *puStack_1c4;
  undefined4 uStack_1bc;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b4;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 *local_1a0;
  int local_19c;
  undefined4 *local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined *local_188 [83];
  CHAR local_3c [31];
  char local_1d;
  int *local_1c;
  char *local_18;
  char *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  puStack_1a8 = &stack0xfffffffc;
  local_1a0 = (undefined4 *)0x0;
  local_19c = 0;
  local_198 = (undefined4 *)0x0;
  local_194 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188[0] = (undefined *)0x0;
  local_14 = (char *)0x0;
  local_18 = (char *)0x0;
  puStack_1ac = &LAB_00483636;
  puStack_1b0 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1b0;
  puStack_1b4 = (undefined1 *)0x48337a;
  local_c = param_1;
  FUN_00403db0(param_2);
  *(undefined1 *)(local_c + 99) = 0;
  puStack_1b4 = (undefined1 *)0x48338d;
  local_10 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
  puStack_1b8 = &LAB_00483604;
  uStack_1bc = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1bc;
  if (*(int *)(local_c + 0x8c) == 0) {
    puStack_1b4 = &stack0xfffffffc;
    FUN_00403e48((int *)&local_14,*(int *)(local_c + 0x88));
    local_5 = '\x01';
  }
  else {
    puStack_1b4 = &stack0xfffffffc;
    FUN_00403e48((int *)&local_14,*(int *)(local_c + 0x8c));
    local_5 = *(char *)(local_c + 0x65);
  }
  if (local_5 == '\0') {
    FUN_00480f44(*(int *)(local_c + 0x78),local_14,local_10);
    FUN_00403e48((int *)&local_18,*(int *)(local_c + 0x8c));
  }
  else {
    FUN_0047faa8(local_14,(int *)local_188);
    puStack_1c4 = FUN_004041f4(local_188[0]);
    sVar2 = thunk_FUN_00479b1d(puStack_1c4);
    if (sVar2 != 0) {
      FUN_004038cc();
      *in_FS_OFFSET = puStack_1b8;
      puStack_1b0 = &LAB_0048363d;
      puStack_1b4 = (undefined1 *)0x483628;
      FUN_00403dd4((int *)&local_1a0,7);
      puStack_1b4 = (undefined1 *)0x483635;
      FUN_00403dd4((int *)&local_18,2);
      return;
    }
    if (local_1d != '\0') {
      local_1d = '\0';
    }
    OemToCharA(local_3c,local_3c);
    FUN_00403fe0((int *)&local_18,local_3c,0x20);
    FUN_00480bdc(*(int *)(local_c + 0x78),local_14,local_10);
  }
  iVar3 = FUN_00413b14(local_10,"USER NAME");
  if (iVar3 != -1) {
    if (*(char *)(local_c + 0x30) != '\0') {
      local_1c = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffe30;
      FUN_00413a08(*(int **)(local_c + 0x7c),"USER NAME",&local_18c);
      if (local_18c == 0) {
        FUN_00413a08(local_10,"USER NAME",&local_190);
        FUN_004140d0(*(int **)(local_c + 0x7c),"USER NAME",local_190);
      }
      FUN_00413a08(*(int **)(local_c + 0x7c),"USER NAME",&local_194);
      FUN_004140d0(local_1c,"USER NAME",local_194);
      FUN_004830e8(local_c,local_1c);
      FUN_00413a08(local_1c,"PASSWORD",(int *)&local_198);
      FUN_00403e04(param_2,local_198);
      FUN_00413a08(local_1c,"USER NAME",&local_19c);
      FUN_004140d0(*(int **)(local_c + 0x7c),"USER NAME",local_19c);
      *in_FS_OFFSET = uVar4;
      FUN_00403094(local_1c);
      return;
    }
    FUN_00413a08(*(int **)(local_c + 0x7c),"PASSWORD",(int *)&local_1a0);
    FUN_00403e04(param_2,local_1a0);
  }
  cVar1 = FUN_004831e4();
  if (cVar1 != '\0') {
    FUN_004814fc(*(int *)(local_c + 0x78),*(undefined **)(local_c + 0x88),local_18,'\0','\x04',
                 local_10);
    *(undefined1 *)(local_c + 99) = 1;
  }
  *in_FS_OFFSET = puStack_1c4;
  uStack_1bc = 0x48360b;
  FUN_00403094(local_10);
  return;
}

