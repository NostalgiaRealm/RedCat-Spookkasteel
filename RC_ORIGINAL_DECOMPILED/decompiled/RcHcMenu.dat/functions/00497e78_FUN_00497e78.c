/*
 * FUN_00497e78 at 00497e78
 * undefined __register FUN_00497e78(uint param_1, int * param_2)
 * Address ranges: 00497e78-00497faa;00497fc2-00497fc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00497e78(uint param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_10;
  int *local_c;
  uint local_8;
  
  puStack_24 = (undefined1 *)0x497e8f;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_004147b0(param_2);
  puStack_24 = (undefined1 *)0x497ea2;
  FUN_00402818((int *)(local_8 + 0x28),0x2c);
  uVar5 = 1;
  puStack_28 = &LAB_00497fab;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00414804(local_c,*(undefined4 *)(local_8 + 0x28),0x2c);
  local_10 = **(int **)(local_8 + 0x28);
  FUN_00402c8c(&local_10,(int *)&DAT_0057159c,4);
  if (!(bool)uVar5) {
    FUN_00403d94("Geen geldig wave bestand.");
  }
  puVar2 = (undefined4 *)(*(uint *)(local_8 + 0x28) + 0x28);
  if (0xffffffd7 < *(uint *)(local_8 + 0x28)) {
    puVar2 = (undefined4 *)thunk_FUN_00402874((uint)puVar2);
  }
  *(undefined4 *)(local_8 + 0x34) = *puVar2;
  uVar3 = *(uint *)(local_8 + 0x34) + 0x2c;
  if (0xffffffd3 < *(uint *)(local_8 + 0x34)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  *(uint *)(local_8 + 0x2c) = uVar3;
  FUN_00402818((int *)(local_8 + 0x28),*(int *)(local_8 + 0x2c));
  FUN_004147c0(local_c,uVar1);
  iVar4 = *(int *)(local_8 + 0x2c);
  if (iVar4 < 0) {
    thunk_FUN_00402874(local_8);
    iVar4 = extraout_ECX;
  }
  FUN_00414804(local_c,*(undefined4 *)(local_8 + 0x28),iVar4);
  uVar3 = *(uint *)(local_8 + 0x28) + 0x14;
  if (0xffffffeb < *(uint *)(local_8 + 0x28)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  *(uint *)(local_8 + 0x30) = uVar3;
  puVar2 = (undefined4 *)(*(uint *)(local_8 + 0x28) + 0x28);
  if (0xffffffd7 < *(uint *)(local_8 + 0x28)) {
    puVar2 = (undefined4 *)thunk_FUN_00402874((uint)puVar2);
  }
  *(undefined4 *)(local_8 + 0x34) = *puVar2;
  uVar3 = *(uint *)(local_8 + 0x28) + 0x2c;
  if (0xffffffd3 < *(uint *)(local_8 + 0x28)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  *(uint *)(local_8 + 0x38) = uVar3;
  *in_FS_OFFSET = uStack_2c;
  return;
}

