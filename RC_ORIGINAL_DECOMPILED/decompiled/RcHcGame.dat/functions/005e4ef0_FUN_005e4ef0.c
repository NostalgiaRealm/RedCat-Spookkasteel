/*
 * FUN_005e4ef0 at 005e4ef0
 * undefined FUN_005e4ef0(void)
 * Address ranges: 005e4ef0-005e4f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 8 for .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 8 for
   .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

void __thiscall FUN_005e4ef0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [6];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0060e481(*(int *)(param_1 + 0x50),param_3,param_4);
    if (iVar1 == 0) {
      local_18[0] = FUN_0060e45f(*(undefined4 *)(param_1 + 0x50),&local_20);
      if (local_18[0] == 0) {
        local_18[3] = local_1c;
        local_18[4] = *(undefined4 *)(param_1 + 0x40);
        local_18[2] = local_20;
        piVar2 = local_18;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_2 = *piVar2;
          piVar2 = piVar2 + 1;
          param_2 = param_2 + 1;
        }
        return;
      }
    }
  }
  local_18[3] = 0;
  local_18[4] = DAT_00747b54;
  local_18[0] = -1;
  local_18[2] = 0;
  piVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *piVar2;
    piVar2 = piVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

