/*
 * FUN_0049af8c at 0049af8c
 * uint __register FUN_0049af8c(int param_1, uint param_2, int param_3)
 * Address ranges: 0049af8c-0049b13d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0049af8c(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint local_14;
  
  FUN_0049abd0(param_1,param_2,param_3);
  local_14 = 0;
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8c))) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x40))) {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 < 0x11) {
      if (iVar2 == 0x10) {
        local_14 = (uint)*(ushort *)
                          (param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                          param_2 * 2);
      }
      else if (iVar2 == 1) {
        local_14 = ((uint)*(byte *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                                   (param_2 >> 3)) & *(uint *)(&DAT_005715a0 + (param_2 & 7) * 4))
                   >> ((byte)*(undefined4 *)(&DAT_005715c8 + (param_2 & 7) * 4) & 0x1f);
      }
      else if (iVar2 == 4) {
        local_14 = ((uint)*(byte *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                                   (param_2 >> 1)) & *(uint *)(&DAT_005715c0 + (param_2 & 1) * 4))
                   >> ((byte)*(undefined4 *)(&DAT_005715e8 + (param_2 & 1) * 4) & 0x1f);
      }
      else if (iVar2 == 8) {
        local_14 = (uint)*(byte *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                                  param_2);
      }
    }
    else if (iVar2 == 0x18) {
      puVar1 = (undefined1 *)
               (param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) + param_2 * 3);
      local_14 = (uint)CONCAT12(*puVar1,CONCAT11(puVar1[1],puVar1[2]));
    }
    else if (iVar2 == 0x20) {
      local_14 = *(uint *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                          param_2 * 4);
    }
  }
  return local_14;
}

