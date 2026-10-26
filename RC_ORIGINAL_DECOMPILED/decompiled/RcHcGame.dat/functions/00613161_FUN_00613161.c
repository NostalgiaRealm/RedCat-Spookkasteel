/*
 * FUN_00613161 at 00613161
 * undefined FUN_00613161(void)
 * Address ranges: 00613161-006131f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00613161(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar2 = FUN_00614cf6(0);
  FUN_00614e92(uVar2);
  if (*DAT_00710054 == '\0') {
    FUN_006153d7(2);
  }
  else {
    cVar1 = *DAT_00710054;
    DAT_00710054 = DAT_00710054 + 1;
    if (cVar1 == '0') {
      FUN_00615307(&DAT_00652430);
    }
    else if (cVar1 == '2') {
      uVar2 = FUN_006131f1(local_14);
      FUN_00615373(uVar2);
    }
    else if (cVar1 == '5') {
      FUN_00614fc6(1);
      return param_1;
    }
  }
  FUN_00615307(&DAT_0065253c);
  FUN_00614df0(local_c);
  return param_1;
}

