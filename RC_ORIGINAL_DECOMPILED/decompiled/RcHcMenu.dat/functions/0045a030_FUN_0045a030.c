/*
 * FUN_0045a030 at 0045a030
 * undefined __register FUN_0045a030(int * param_1, char param_2)
 * Address ranges: 0045a030-0045a0af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45984c slot -1 for TUniqueStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45984c slot -1 for
   TUniqueStringList. Original bytes unchanged; names and types still inferred. */

void FUN_0045a030(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_10;
  byte local_9;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x45a03b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_18 = &LAB_0045a0b0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_9 = extraout_DL;
  if ((char)local_8[0xc] != '\0') {
    puStack_14 = &stack0xfffffffc;
    iVar1 = (**(code **)(*local_8 + 0x14))();
    local_10 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      local_10 = thunk_FUN_00402874(local_10);
    }
    while (-1 < (int)local_10) {
      piVar2 = (int *)(**(code **)(*local_8 + 0x18))(local_8,local_10);
      uVar3 = FUN_00403094(piVar2);
      bVar4 = SBORROW4(local_10,1);
      local_10 = local_10 - 1;
      if (bVar4) {
        thunk_FUN_00402874(uVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0045a0b7;
  puStack_18 = (undefined1 *)0x45a0af;
  FUN_004141f8(local_8,local_9 & 0xfc);
  return;
}

