/*
 * FUN_00599b80 at 00599b80
 * undefined FUN_00599b80(void)
 * Address ranges: 00599b80-00599c78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00599b80(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  puVar4 = (undefined4 *)(param_1 + 0x34);
  local_c = 0;
  local_8 = 8;
  puVar5 = puVar4;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_0059df90(*puVar5);
      uVar2 = FUN_00597a00();
      cVar1 = FUN_00599e10(param_3,uVar2);
      if (cVar1 != '\0') {
        local_c = local_c + 1;
      }
    }
    puVar5 = puVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (0 < local_c) {
    iVar3 = FUN_0060a4a0();
    iVar6 = 0;
    local_8 = 0;
    do {
      cVar1 = FUN_0059b1f0();
      if (cVar1 != '\0') {
        FUN_0059df90(*puVar4);
        uVar2 = FUN_00597a00();
        cVar1 = FUN_00599e10(param_3,uVar2);
        if ((cVar1 != '\0') && (local_8 = local_8 + 1, local_8 == iVar3 % local_c + 1)) {
          *param_2 = *(undefined4 *)(param_1 + 0x34 + iVar6 * 4);
          return param_2;
        }
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < 8);
  }
  FUN_0059b1d0(&DAT_00650084);
  return param_2;
}

