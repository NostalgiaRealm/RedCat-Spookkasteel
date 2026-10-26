/*
 * FUN_00546b20 at 00546b20
 * undefined __register FUN_00546b20(int * param_1)
 * Address ranges: 00546b20-00546c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 21 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 21 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00546b20(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_128;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_00546c0c;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_128 = " Connection is nil";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar3 = puStack_114;
  }
  puStack_114 = puVar3;
  (**(code **)(*local_8 + 0x50))();
  *(int *)(local_8[0x21] + 0xc) = local_8[0xd];
  *(int *)(local_8[0x21] + 0x1c) = local_8[0xf];
  *(int *)(local_8[0x21] + 0x28) = local_8[10];
  (*(code *)**(undefined4 **)local_8[0x21])();
  piVar1 = local_8 + 0x23;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_128;
  FUN_00403dd4(&local_10,2);
  return;
}

