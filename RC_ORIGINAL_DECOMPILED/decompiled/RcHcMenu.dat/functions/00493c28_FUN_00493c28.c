/*
 * FUN_00493c28 at 00493c28
 * undefined __register FUN_00493c28(int * param_1)
 * Address ranges: 00493c28-00493c68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00493c28(int *param_1)

{
  bool bVar1;
  char cVar2;
  byte local_28 [28];
  int *local_c;
  int *local_8;
  
  local_8 = param_1;
  bVar1 = FUN_00493e54(param_1,local_28);
  if (bVar1) {
    do {
      local_c = (int *)FUN_00494c5c(local_8,local_28);
      (**(code **)(*local_c + 0x58))();
      cVar2 = FUN_00493e78(local_8,local_28);
    } while (cVar2 != '\0');
  }
  return;
}

