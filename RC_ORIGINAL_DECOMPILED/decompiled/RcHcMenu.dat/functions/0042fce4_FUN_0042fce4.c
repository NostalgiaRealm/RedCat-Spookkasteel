/*
 * FUN_0042fce4 at 0042fce4
 * undefined __register FUN_0042fce4(int * param_1, undefined4 param_2)
 * Address ranges: 0042fce4-0042fd3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042fce4(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_004027e8(8);
  *puVar2 = local_8;
  pHVar3 = FUN_0042fcbc();
  puVar2[1] = pHVar3;
  cVar1 = FUN_0042fc88(param_1,(int)pHVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_004121d8(param_1,(int)puVar2);
  }
  else {
    FUN_00412400(param_1,local_c,(int)puVar2);
  }
  return;
}

