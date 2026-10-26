/*
 * FUN_00416620 at 00416620
 * undefined __register FUN_00416620(int * param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 00416620-00416664
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416620(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  pcVar2 = (code *)FUN_00411ba8(*(int *)*param_2);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_3,&local_c), cVar1 != '\0')) {
    FUN_0040fa6c(local_8,param_2,local_c);
    return;
  }
  FUN_00415400();
  return;
}

