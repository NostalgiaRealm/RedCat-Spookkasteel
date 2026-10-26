/*
 * FUN_004d3668 at 004d3668
 * undefined1 __register FUN_004d3668(int * param_1)
 * Address ranges: 004d3668-004d3728
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004d3668(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte local_3c [28];
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_9 = 0;
  local_8 = param_1;
  iVar3 = FUN_00494858(param_1);
  local_10 = *(int *)(iVar3 + 8);
  iVar3 = FUN_004905c0(local_10);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_1c = 0;
    do {
      local_14 = (int *)FUN_00490590(local_10,local_1c);
      bVar1 = FUN_00491e60((int)local_14,local_3c);
      if (bVar1) {
        do {
          local_18 = (int *)FUN_00492440(local_14,local_3c);
          uVar5 = FUN_0040320c(local_18,(int)&PTR_FUN_0048cd88);
          if ((char)uVar5 != '\0') {
            iVar3 = FUN_00494858(local_8);
            iVar3 = *(int *)(iVar3 + 0x34);
            iVar6 = FUN_00403224(local_18,(int)&PTR_FUN_0048cd88);
            if (iVar3 == *(int *)(iVar6 + 0x30)) {
              return 1;
            }
          }
          cVar2 = FUN_00491eac((int)local_14,local_3c);
        } while (cVar2 != '\0');
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return local_9;
}

