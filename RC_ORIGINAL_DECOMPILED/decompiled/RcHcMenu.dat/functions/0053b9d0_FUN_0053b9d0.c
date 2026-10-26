/*
 * FUN_0053b9d0 at 0053b9d0
 * char __register FUN_0053b9d0(uint param_1)
 * Address ranges: 0053b9d0-0053bb44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 6 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 6 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

char FUN_0053b9d0(uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char local_9;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00403d94("Assertion failure");
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0x3c))();
  if (cVar3 == '\0') {
    FUN_00403d94(" Cannot move relative while no current record");
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = *(int *)(param_1 + 0x90) + 1;
    if (SCARRY4(*(int *)(param_1 + 0x90),1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if ((uVar4 == *(uint *)(param_1 + 0x8c)) && (*(char *)(param_1 + 0x85) == '\0')) {
      if (*(char *)(param_1 + 0x40) != '\0') {
        FUN_00403d94(" Internal inconsistency");
      }
      *(undefined1 *)(param_1 + 0x85) = 1;
      cVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0x50))();
      if (cVar3 != '\0') {
        piVar1 = (int *)(param_1 + 0x90);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        if (SCARRY4(iVar2,1)) {
          thunk_FUN_00402874(param_1);
        }
      }
      local_9 = '\x01';
    }
    else {
      if (*(char *)(param_1 + 0x85) == '\0') {
        local_9 = (**(code **)(**(int **)(param_1 + 0x88) + 0x50))();
        if (local_9 != '\0') {
          piVar1 = (int *)(param_1 + 0x90);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + 1;
          if (SCARRY4(iVar2,1)) {
            thunk_FUN_00402874(param_1);
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x40) != '\0') {
          FUN_00403d94(" Internal inconsistency");
        }
        local_9 = '\x01';
      }
      *(undefined1 *)(param_1 + 0x85) = 0;
    }
  }
  else {
    local_9 = (**(code **)(**(int **)(param_1 + 0x88) + 0x50))();
    if (local_9 != '\0') {
      piVar1 = (int *)(param_1 + 0x90);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402874(param_1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x84) = 0;
  return local_9;
}

