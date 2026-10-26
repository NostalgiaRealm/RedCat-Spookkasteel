/*
 * FUN_00539778 at 00539778
 * undefined __register FUN_00539778(int * param_1, int param_2)
 * Address ranges: 00539778-005399c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00539778(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_130;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_12c = 0;
  local_130 = 0;
  local_24 = 0;
  local_28 = 0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_13c = &LAB_005399ca;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00538b6c(param_1);
  local_10 = FUN_00494c5c(local_14,(byte *)(local_c + 0x44));
  piVar2 = FUN_00406aa0((int *)&local_1c);
  cVar1 = FUN_00403128(local_14,(int *)&DAT_005399d8,piVar2);
  if (cVar1 == '\0') {
    piVar2 = FUN_00406aa0((int *)&local_18);
    FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_005399e8,piVar2);
    if (local_18 == (int *)0x0) {
      FUN_00402fe0(*local_8,local_128);
      FUN_00403fd4(&local_130,local_128);
      FUN_004040f0(&local_12c,3);
      FUN_00403d94(local_12c);
    }
    (**(code **)(*local_18 + 0x40))(local_18,local_10);
    piVar2 = FUN_00536888(local_8[0xb5],local_14,extraout_ECX);
    (**(code **)(*piVar2 + 0x10))(piVar2,local_10,*(undefined4 *)(local_c + 0x68));
  }
  else {
    local_20 = *(int *)(local_c + 100);
    (**(code **)(*local_1c + 0x14))(local_1c,&local_20,&local_10);
    if (local_20 != *(int *)(local_c + 100)) {
      piVar2 = (int *)FUN_00538e94(local_8);
      uVar3 = FUN_005374a4(piVar2);
      FUN_005394e4(uVar3,local_c);
      iVar4 = local_10;
      piVar2 = (int *)FUN_00538e94(local_8);
      piVar2 = (int *)FUN_005374a4(piVar2);
      FUN_0053938c(piVar2,local_c,local_20,iVar4);
      piVar2 = (int *)FUN_00538e94(local_8);
      piVar2 = (int *)FUN_005374a4(piVar2);
      FUN_0053951c(piVar2,local_c);
    }
    (**(code **)(*local_1c + 0x18))(local_1c,*(undefined4 *)(local_c + 0x68),local_10);
    piVar2 = FUN_00406aa0((int *)&local_18);
    FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_005399e8,piVar2);
    if (local_18 == (int *)0x0) {
      FUN_00402fe0(*local_8,local_128);
      FUN_00403fd4(&local_28,local_128);
      FUN_004040f0(&local_24,3);
      FUN_00403d94(local_24);
    }
    (**(code **)(*local_18 + 0x40))(local_18,local_10);
    (**(code **)(*local_1c + 0x1c))(local_1c,*(undefined4 *)(local_c + 0x68),local_10);
  }
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_005399d1;
  puStack_13c = (undefined1 *)0x5399ac;
  FUN_00403dd4(&local_130,2);
  puStack_13c = (undefined1 *)0x5399b9;
  FUN_00403dd4(&local_28,2);
  puStack_13c = (undefined1 *)0x5399c1;
  FUN_00406aa0((int *)&local_1c);
  puStack_13c = (undefined1 *)0x5399c9;
  FUN_00406aa0((int *)&local_18);
  return;
}

