/*
 * FUN_005ef150 at 005ef150
 * undefined FUN_005ef150(void)
 * Address ranges: 005ef150-005ef21f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005ef150(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006475ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x50);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0xc);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FUN_0040cc00((undefined1 *)(param_1 + 0xc),0,0xffffffff);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar1[8] = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(param_1 + 0x24);
    *puVar1 = &PTR_FUN_00650a74;
    local_4._0_1_ = 1;
    FUN_005ed100(param_1 + 0x28);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005ed100(param_1 + 0x3c);
    *puVar1 = &PTR_FUN_00650c20;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

