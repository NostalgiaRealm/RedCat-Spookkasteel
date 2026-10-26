/*
 * FUN_0051d040 at 0051d040
 * undefined __register FUN_0051d040(undefined4 param_1, int param_2, undefined1 * param_3)
 * Address ranges: 0051d040-0051d11f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051d040(undefined4 param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_00516c48(param_2,"Alignment");
  if ((((((cVar1 != '\0') && (cVar1 = FUN_00516c48(param_2,"CanMove"), cVar1 != '\0')) &&
        (cVar1 = FUN_00516c48(param_2,"CanSize"), cVar1 != '\0')) &&
       ((cVar1 = FUN_00516c48(param_2,"CanSort"), cVar1 != '\0' &&
        (cVar1 = FUN_00516c48(param_2,"Fixed"), cVar1 != '\0')))) &&
      ((cVar1 = FUN_00516c48(param_2,"Margin"), cVar1 != '\0' &&
       ((cVar1 = FUN_00516c48(param_2,"SortIndex"), cVar1 != '\0' &&
        (cVar1 = FUN_00516c48(param_2,"SortOrder"), cVar1 != '\0')))))) &&
     ((cVar1 = FUN_00516c48(param_2,"Title"), cVar1 != '\0' &&
      ((cVar1 = FUN_00516c48(param_2,"Visible"), cVar1 != '\0' &&
       (cVar1 = FUN_00516c48(param_2,"Width"), cVar1 != '\0')))))) {
    return;
  }
  *param_3 = 0;
  return;
}

