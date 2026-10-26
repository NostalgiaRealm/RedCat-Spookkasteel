/*
 * FUN_004c40e0 at 004c40e0
 * undefined1 __register FUN_004c40e0(undefined4 param_1, int * param_2)
 * Address ranges: 004c40e0-004c4139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 17 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 17 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_004c40e0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_d;
  
  local_d = 0;
  uVar1 = FUN_0040320c(param_2,(int)&DAT_004b64c0);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_004c413c(param_1);
    uVar3 = iVar2 - 0xc80;
    if (SBORROW4(iVar2,0xc80)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if ((((uVar3 < 2) || (uVar3 == 6)) || (uVar3 == 0x51)) || ((uVar3 == 0xad || (uVar3 == 0xb3))))
    {
      local_d = 1;
    }
  }
  return local_d;
}

