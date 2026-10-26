/*
 * FUN_00537f4c at 00537f4c
 * undefined __register FUN_00537f4c(int * param_1)
 * Address ranges: 00537f4c-00537ff4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x536c1c slot 46 for TOAGridPanel. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00537f80) */
/* Recovered original virtual function entry from validated Delphi VMT 0x536c1c slot 46 for
   TOAGridPanel. Original bytes unchanged; names and types still inferred. */

void FUN_00537f4c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint local_c;
  
  local_c = 0;
  iVar1 = FUN_00537750(param_1);
  uVar2 = FUN_00520c98(iVar1);
  if ((char)uVar2 != '\0') {
    piVar3 = (int *)FUN_00537750(param_1);
    iVar1 = FUN_00538e94(piVar3);
    local_c = *(uint *)(iVar1 + 0x3c);
  }
  iVar1 = FUN_00537750(param_1);
  if (*(char *)(iVar1 + 0x2d1) != '\0') {
    iVar1 = FUN_00537750(param_1);
    uVar2 = FUN_00529294(iVar1);
    if (((char)uVar2 != '\0') &&
       (iVar1 = FUN_00537750(param_1), *(char *)(*(int *)(iVar1 + 0x290) + 0x10) == '\x01')) {
      iVar1 = FUN_00537750(param_1);
      uVar4 = *(int *)(iVar1 + 0x208) + local_c;
      if (SCARRY4(*(int *)(iVar1 + 0x208),local_c)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      local_c = uVar4 + param_1[0x81];
      if (SCARRY4(uVar4,param_1[0x81])) {
        local_c = thunk_FUN_00402874(local_c);
      }
    }
  }
  FUN_00431f98(param_1,local_c);
  return;
}

