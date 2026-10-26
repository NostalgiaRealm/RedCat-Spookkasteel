/*
 * FUN_004998c0 at 004998c0
 * undefined __register FUN_004998c0(void)
 * Address ranges: 004998c0-00499a8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004998c0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int in_stack_00000004;
  uint local_24;
  int local_1c;
  uint local_18;
  byte *local_10;
  byte local_7;
  byte local_6;
  
  local_10 = *(byte **)(*(int *)(in_stack_00000004 + -4) + 0x440);
  local_18 = 0;
  bVar4 = false;
  local_1c = 0;
  do {
    local_6 = local_10[1];
    pbVar5 = local_10 + 2;
    if (*local_10 == 0) {
      if (local_6 == 0) {
        local_18 = 0;
        bVar4 = false;
        local_1c = local_1c + 1;
        local_10 = pbVar5;
      }
      else {
        if (local_6 == 1) {
          return;
        }
        if (local_6 == 2) {
          local_1c = local_1c + 2;
          local_10 = local_10 + 4;
        }
        else {
          iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x440);
          iVar2 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480);
          local_7 = 0;
          local_24 = (uint)local_6;
          local_10 = pbVar5;
          if (-1 < (int)(local_24 - 1)) {
            cVar3 = '\0';
            do {
              if (cVar3 == '\0') {
                local_7 = *local_10;
                local_10 = local_10 + 1;
              }
              else {
                local_7 = local_7 << 4;
              }
              pbVar5 = (byte *)((local_18 >> 1) + iVar1 + iVar2 * local_1c);
              if (bVar4) {
                *pbVar5 = *pbVar5 & 0xf0 | local_7 >> 4;
              }
              else {
                *pbVar5 = *pbVar5 & 0xf | local_7 & 0xf0;
              }
              local_18 = local_18 + 1;
              bVar4 = (bool)(bVar4 ^ 1);
              cVar3 = cVar3 + '\x01';
              local_24 = local_24 - 1;
            } while (local_24 != 0);
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x440);
      iVar2 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480);
      local_24 = (uint)*local_10;
      local_10 = pbVar5;
      if (-1 < (int)(local_24 - 1)) {
        do {
          pbVar6 = (byte *)((local_18 >> 1) + iVar1 + iVar2 * local_1c);
          if (bVar4) {
            *pbVar6 = *pbVar6 & 0xf0 | local_6 >> 4;
          }
          else {
            *pbVar6 = *pbVar6 & 0xf | local_6 & 0xf0;
          }
          local_18 = local_18 + 1;
          bVar4 = (bool)(bVar4 ^ 1);
          local_6 = local_6 >> 4 | local_6 << 4;
          local_24 = local_24 - 1;
        } while (local_24 != 0);
      }
    }
    local_10 = local_10 + ((uint)local_10 & 1);
  } while( true );
}

