/*
 * FUN_00552380 at 00552380
 * undefined __register FUN_00552380(int * param_1, char param_2)
 * Address ranges: 00552380-00552427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5520e4 slot -1 for TSingletonForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5520e4 slot -1 for
   TSingletonForm. Original bytes unchanged; names and types still inferred. */

void FUN_00552380(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte extraout_DL;
  uint local_14;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (DAT_00574848 != (int *)0x0) {
    local_14 = DAT_00574848[2] - 1;
    if (SBORROW4(DAT_00574848[2],1)) {
      local_14 = thunk_FUN_00402874(local_14);
    }
    if (-1 < (int)local_14) {
      do {
        iVar2 = FUN_00412384(DAT_00574848,local_14);
        iVar3 = FUN_00402fdc(piVar1);
        if (iVar3 == *(int *)(iVar2 + 4)) {
          FUN_00412224(DAT_00574848,local_14);
          break;
        }
        local_14 = local_14 - 1;
      } while (local_14 != 0xffffffff);
    }
    if (DAT_00574848[2] == 0) {
      FUN_00403094(DAT_00574848);
      DAT_00574848 = (int *)0x0;
    }
  }
  FUN_0044a05c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

