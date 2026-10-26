/*
 * FUN_0053a230 at 0053a230
 * undefined __register FUN_0053a230(int * param_1)
 * Address ranges: 0053a230-0053a37a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a230(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (int *)0x0;
  puStack_20 = &LAB_0053a37b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  iVar2 = FUN_0053881c(param_1);
  if (*(char *)(*(int *)(iVar2 + 0x68) + 0x47) != '\0') {
    local_10 = (int *)FUN_00538b6c(local_8);
    iVar2 = FUN_0053881c(local_8);
    local_c = FUN_00494c5c(local_10,(byte *)(iVar2 + 0x44));
    cVar1 = FUN_00403270(local_8,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      (**(code **)(*local_8 + 0xb0))();
    }
    piVar3 = FUN_00406aa0((int *)&local_14);
    cVar1 = FUN_00403128(local_10,(int *)&DAT_0053a388,piVar3);
    if (cVar1 == '\0') {
      iVar2 = FUN_0053881c(local_8);
      FUN_0043262c(*(int **)(iVar2 + 0x68),0,extraout_ECX_01);
      piVar3 = FUN_00536888(local_8[0xb5],local_10,extraout_ECX_02);
      iVar2 = FUN_0053881c(local_8);
      (**(code **)(*piVar3 + 0xc))(piVar3,local_c,*(undefined4 *)(iVar2 + 0x68));
    }
    else {
      iVar2 = FUN_0053881c(local_8);
      (**(code **)(*local_14 + 0x28))(local_14,*(undefined4 *)(iVar2 + 0x68),local_c);
      iVar2 = FUN_0053881c(local_8);
      FUN_0043262c(*(int **)(iVar2 + 0x68),0,extraout_ECX_00);
      iVar2 = FUN_0053881c(local_8);
      (**(code **)(*local_14 + 0x2c))(local_14,*(undefined4 *)(iVar2 + 0x68),local_c);
    }
    if (((char)local_8[0xb6] == '\x01') || ((char)local_8[0xb6] == '\x02')) {
      iVar2 = FUN_00538860(local_8);
      iVar2 = FUN_00523748(iVar2);
      piVar3 = (int *)FUN_00538860(local_8);
      FUN_00524fb8(piVar3,iVar2);
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0053a382;
  puStack_20 = (undefined1 *)0x53a37a;
  FUN_00406aa0((int *)&local_14);
  return;
}

