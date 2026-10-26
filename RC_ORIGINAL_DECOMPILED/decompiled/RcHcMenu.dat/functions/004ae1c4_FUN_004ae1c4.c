/*
 * FUN_004ae1c4 at 004ae1c4
 * undefined4 __register FUN_004ae1c4(int param_1, uint param_2, int param_3)
 * Address ranges: 004ae1c4-004ae2cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 37 for TCustomGDIButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 37 for
   TCustomGDIButton. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004ae1c4(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *local_18;
  undefined4 local_14;
  
  local_14 = FUN_004a8d48();
  if (*(int *)(param_1 + 0x174) != 0) {
    piVar2 = (int *)FUN_004ad63c(*(int *)(param_1 + 0x174),6);
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if ((cVar1 == '\0') && (uVar3 = FUN_0040320c(piVar2,(int)&LAB_0049893c), (char)uVar3 != '\0')) {
      local_18 = (int *)FUN_00403224(piVar2,(int)&LAB_0049893c);
      FUN_0049b9c0(local_18,'\0');
      (**(code **)(*local_18 + 0x3c))(local_18,1);
    }
    else {
      local_18 = FUN_004aea3c(param_1);
    }
    cVar1 = (**(code **)(*local_18 + 0x1c))();
    if (cVar1 == '\0') {
      if ((local_18[0x23] < (int)param_2) || (local_18[0x10] < param_3)) {
        local_14 = 0;
      }
      else {
        cVar1 = (**(code **)(*local_18 + 0x28))();
        if (cVar1 != '\0') {
          uVar4 = FUN_0049af8c((int)local_18,param_2,param_3);
          uVar5 = FUN_0049af2c((int)local_18);
          if ((uVar4 & 0xffffff) == (uVar5 & 0xffffff)) {
            local_14 = 0;
          }
        }
      }
    }
    else {
      local_14 = 0;
    }
    return local_14;
  }
  return local_14;
}

