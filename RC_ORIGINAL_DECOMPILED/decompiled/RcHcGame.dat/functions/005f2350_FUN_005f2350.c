/*
 * FUN_005f2350 at 005f2350
 * undefined FUN_005f2350(void)
 * Address ranges: 005f2350-005f2420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f2350(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647c13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x44);
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
    *puVar2 = &PTR_FUN_00650a74;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005ed100(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    *puVar2 = &PTR_FUN_00650b8c;
    *(undefined1 *)(puVar2 + 0xf) = uVar1;
    puVar2[0x10] = *(undefined4 *)(param_1 + 0x40);
    *puVar2 = &PTR_FUN_00650eb4;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

