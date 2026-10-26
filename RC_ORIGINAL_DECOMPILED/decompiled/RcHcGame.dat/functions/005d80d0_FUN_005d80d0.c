/*
 * FUN_005d80d0 at 005d80d0
 * undefined FUN_005d80d0(void)
 * Address ranges: 005d80d0-005d8177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005d8170) */

void FUN_005d80d0(int *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_10;
  int local_c;
  undefined1 local_8;
  undefined1 local_4;
  
  iVar7 = 0;
  local_10 = 0x100;
  puVar6 = param_3;
  do {
    if (param_4 <= iVar7) {
      return;
    }
    local_c = 0;
    piVar5 = param_1;
    if (0 < param_2) {
      do {
        iVar4 = *piVar5;
        uVar1 = *(undefined4 *)(iVar4 + 0x2c);
        uVar2 = *(undefined4 *)(iVar4 + 0x30);
        uVar3 = *(undefined4 *)(iVar4 + 0x34);
        piVar5 = piVar5 + 1;
        iVar4 = FUN_005d7e80(uVar1,uVar2,uVar3,param_3,iVar7,0);
        if (local_10 <= iVar4) {
          local_8 = (undefined1)uVar2;
          local_4 = (undefined1)uVar3;
          *puVar6 = (char)uVar1;
          puVar6[1] = local_8;
          puVar6[2] = local_4;
          puVar6 = puVar6 + 3;
          iVar7 = iVar7 + 1;
          if (iVar7 == param_4) break;
        }
        local_c = local_c + 1;
      } while (local_c < param_2);
    }
    local_10 = local_10 >> 1;
  } while( true );
}

