/*
 * FUN_00539d5c at 00539d5c
 * undefined __register FUN_00539d5c(int * param_1)
 * Address ranges: 00539d5c-00539fa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00539d5c(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_14 = (int *)0x0;
  puStack_12c = &LAB_00539fa9;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_8 = param_1;
  iVar2 = FUN_0053881c(param_1);
  if (*(char *)(*(int *)(iVar2 + 0x68) + 0x47) != '\0') goto LAB_00539f86;
  if ((char)local_8[0xb6] == '\0') {
    FUN_00402fe0(*local_8,local_120);
    FUN_00403fd4(&local_20,local_120);
    FUN_004040f0(&local_1c,3);
    FUN_00403d94(local_1c);
  }
  local_10 = (int *)FUN_00538b6c(local_8);
  iVar2 = FUN_0053881c(local_8);
  local_c = FUN_00494c5c(local_10,(byte *)(iVar2 + 0x44));
  piVar3 = FUN_00406aa0((int *)&local_14);
  cVar1 = FUN_00403128(local_10,(int *)&DAT_0053a024,piVar3);
  if (cVar1 != '\0') {
    iVar2 = FUN_0053881c(local_8);
    local_18 = *(int *)(iVar2 + 100);
    (**(code **)(*local_14 + 0x14))(local_14,&local_18,&local_c);
    iVar2 = FUN_0053881c(local_8);
    iVar2 = FUN_00494c5c(local_10,(byte *)(iVar2 + 0x44));
    if (iVar2 == local_c) {
      iVar2 = FUN_0053881c(local_8);
      if (*(int *)(iVar2 + 100) == local_18) goto LAB_00539e91;
    }
    iVar2 = FUN_0053881c(local_8);
    FUN_00539ae4(local_8,iVar2);
    iVar2 = FUN_0053881c(local_8);
    FUN_00539778(local_8,iVar2);
  }
LAB_00539e91:
  if ((char)local_8[0xb6] == '\x03') {
    uVar4 = FUN_00538fbc(local_8);
    iVar2 = FUN_0053881c(local_8);
    (**(code **)(**(int **)(iVar2 + 0x68) + 0x60))(*(int **)(iVar2 + 0x68),uVar4);
  }
  else {
    uVar4 = FUN_00538860(local_8);
    iVar2 = FUN_0053881c(local_8);
    (**(code **)(**(int **)(iVar2 + 0x68) + 0x60))(*(int **)(iVar2 + 0x68),uVar4);
  }
  piVar3 = FUN_00406aa0((int *)&local_14);
  cVar1 = FUN_00403128(local_10,(int *)&DAT_0053a024,piVar3);
  if (cVar1 == '\0') {
    FUN_0053a034(local_8);
    iVar2 = FUN_0053881c(local_8);
    FUN_0043262c(*(int **)(iVar2 + 0x68),CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),
                 extraout_ECX_00);
    FUN_0053a034(local_8);
    iVar2 = FUN_0053881c(local_8);
    (**(code **)(**(int **)(iVar2 + 0x68) + 0xb0))();
  }
  else {
    iVar2 = FUN_0053881c(local_8);
    (**(code **)(*local_14 + 0x20))(local_14,*(undefined4 *)(iVar2 + 0x68),local_c);
    FUN_0053a034(local_8);
    iVar2 = FUN_0053881c(local_8);
    FUN_0043262c(*(int **)(iVar2 + 0x68),CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
    FUN_0053a034(local_8);
    iVar2 = FUN_0053881c(local_8);
    (**(code **)(*local_14 + 0x24))(local_14,*(undefined4 *)(iVar2 + 0x68),local_c);
    iVar2 = FUN_0053881c(local_8);
    (**(code **)(**(int **)(iVar2 + 0x68) + 0xb0))();
  }
LAB_00539f86:
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00539fb0;
  puStack_12c = (undefined1 *)0x539fa0;
  FUN_00403dd4(&local_20,2);
  puStack_12c = (undefined1 *)0x539fa8;
  FUN_00406aa0((int *)&local_14);
  return;
}

