/*
 * FUN_0048ec78 at 0048ec78
 * undefined1 __register FUN_0048ec78(int * param_1, byte * param_2)
 * Address ranges: 0048ec78-0048ed04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0048ec78(int *param_1,byte *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  byte bVar6;
  
  bVar6 = 0;
  if (((char)param_1[6] != '\0') && (cVar2 = FUN_0048ef44(param_1,param_2), cVar2 != '\0')) {
    return 0;
  }
  uVar3 = FUN_0048ec24((int)param_1);
  iVar5 = uVar3 + 1;
  if (SCARRY4(uVar3,1)) {
    thunk_FUN_00402874(uVar3);
    iVar5 = extraout_EDX;
  }
  FUN_0045d910((uint)param_1,iVar5);
  piVar1 = param_1 + 1;
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar5,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  uVar3 = FUN_0048ec24((int)param_1);
  iVar5 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    thunk_FUN_00402874(uVar3);
    iVar5 = extraout_EDX_00;
  }
  puVar4 = (undefined4 *)FUN_0045d430(param_1,iVar5);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + (uint)bVar6 * -8 + 4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  return 1;
}

