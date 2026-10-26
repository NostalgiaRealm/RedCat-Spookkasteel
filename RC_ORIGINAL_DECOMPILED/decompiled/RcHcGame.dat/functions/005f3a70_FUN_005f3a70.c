/*
 * FUN_005f3a70 at 005f3a70
 * undefined FUN_005f3a70(void)
 * Address ranges: 005f3a70-005f3b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f3a70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ec3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x48);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0xc);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    FUN_0040cc00((undefined1 *)(param_1 + 0xc),0,0xffffffff);
    puVar2[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar2[8] = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(puVar2 + 9) = *(undefined2 *)(param_1 + 0x24);
    *(undefined1 *)(puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0x29) = 0;
    *puVar2 = &PTR_FUN_00650f54;
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    puVar2[0xc] = 0;
    puVar2[0xb] = uVar1;
    *puVar2 = &PTR_FUN_00651060;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005f9410(param_1 + 0x34);
    *puVar2 = &PTR_FUN_006510c0;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

