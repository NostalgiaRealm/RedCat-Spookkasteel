/*
 * FUN_00490ab0 at 00490ab0
 * undefined __register FUN_00490ab0(int * param_1, char param_2)
 * Address ranges: 00490ab0-00490b9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e794 slot -1 for TAppObjDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e794 slot -1 for
   TAppObjDesc. Original bytes unchanged; names and types still inferred. */

void FUN_00490ab0(int *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte extraout_DL;
  short *psVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  short local_5c [32];
  int *local_1c;
  byte local_18;
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  bVar5 = 0;
  puStack_68 = (undefined1 *)0x490abd;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_6c = &LAB_00490b9b;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_68 = &stack0xfffffffc;
  local_9 = extraout_DL;
  iVar1 = FUN_0045da14(local_8[0xb]);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      puVar3 = (undefined4 *)FUN_00496dfc((int *)local_8[0xb],local_10);
      psVar4 = local_5c;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)psVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        psVar4 = psVar4 + ((uint)bVar5 * -2 + 1) * 2;
      }
      if (((1 < local_5c[0]) && ((local_18 & 1) != 0)) && ((local_18 & 2) == 0)) {
        FUN_00403094(local_1c);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_00403094((int *)local_8[0xb]);
  FUN_00403094((int *)local_8[0xe]);
  FUN_00403094((int *)local_8[10]);
  FUN_00403094((int *)local_8[5]);
  FUN_00403094((int *)local_8[3]);
  FUN_00403094((int *)local_8[6]);
  FUN_00403094((int *)local_8[4]);
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_00490ba2;
  puStack_6c = (undefined1 *)0x490b9a;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

