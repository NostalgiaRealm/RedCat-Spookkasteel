/*
 * FUN_005d8920 at 005d8920
 * undefined FUN_005d8920(void)
 * Address ranges: 005d8920-005d8fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d8920(int param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *local_334;
  int local_330;
  int local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  int local_318;
  int local_314;
  int local_310;
  code *local_30c;
  int local_308;
  code *local_304;
  undefined1 local_300 [768];
  
  if (*(int *)(param_3 + 0x20) == 0) {
    return 0;
  }
  iVar3 = FUN_005c4f20(9,0x100);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_005d9030(local_300);
  if (iVar3 == 0) {
    return 0;
  }
  local_310 = FUN_005c6a70();
  local_310 = (*(int *)(param_1 + 8) - param_5) * local_310;
  local_330 = param_2;
  local_334 = param_4;
  if (*(int *)(param_3 + 0x18) == 0) {
    iVar4 = FUN_005c6a40();
    pcVar1 = *(code **)(iVar4 + 0x44);
    while (iVar4 = param_5, param_6 != 0) {
      for (; local_32c = param_6, iVar4 != 0; iVar4 = iVar4 + -1) {
        (*pcVar1)(&local_330,&local_320,&local_328,&local_324,&local_314);
        bVar2 = FUN_005d91c0(local_320,local_328,local_324,iVar3);
        *param_4 = bVar2;
        param_4 = param_4 + 1;
        param_6 = local_32c;
      }
      local_330 = local_330 + local_310;
      param_4 = param_4 + (*(int *)(param_3 + 8) - param_5);
      local_32c = local_32c + -1;
      param_6 = local_32c;
    }
  }
  else {
    iVar4 = FUN_005c6a40();
    local_31c = *(uint *)(param_3 + 0x1c);
    iVar5 = FUN_005c6ab0();
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        pcVar1 = *(code **)(iVar4 + 0x44);
        iVar5 = param_6;
        iVar4 = param_5;
        if (param_6 != 0) {
          do {
            for (; local_32c = iVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
              (*pcVar1)(&local_330,&local_320,&local_328,&local_324,&local_314);
              bVar2 = FUN_005d91c0(local_320,local_328,local_324,iVar3);
              *param_4 = bVar2;
              if (bVar2 == local_31c) {
                *param_4 = bVar2 ^ 1;
              }
              param_4 = param_4 + 1;
              iVar5 = local_32c;
            }
            local_330 = local_330 + local_310;
            param_4 = param_4 + (*(int *)(param_3 + 8) - param_5);
            iVar5 = local_32c + -1;
            iVar4 = param_5;
          } while (local_32c + -1 != 0);
          local_32c = 0;
        }
      }
      else {
        local_30c = *(code **)(iVar4 + 0x4c);
        local_304 = *(code **)(iVar4 + 0x40);
        local_308 = *(int *)(param_1 + 0x1c);
        if (param_6 != 0) {
          local_318 = param_6;
          do {
            if (param_5 != 0) {
              local_32c = param_5;
              do {
                iVar4 = (*local_30c)(&local_330);
                if (iVar4 == local_308) {
                  *local_334 = (byte)local_31c;
                }
                else {
                  (*local_304)(iVar4,&local_320,&local_328,&local_324,&local_314);
                  iVar4 = *(int *)(*(int *)(iVar3 + 4) +
                                  (((int)local_324 >> 7 & 1U) +
                                  (((int)local_328 >> 7 & 1U) + ((int)local_320 >> 7 & 1U) * 2) * 2)
                                  * 4);
                  if (((((iVar4 == 0) ||
                        (iVar4 = *(int *)(iVar4 + (((int)local_324 >> 6 & 1U) +
                                                  (((int)local_328 >> 6 & 1U) +
                                                  ((int)local_320 >> 6 & 1U) * 2) * 2) * 4),
                        iVar4 == 0)) ||
                       (iVar4 = *(int *)(iVar4 + (((int)local_324 >> 5 & 1U) +
                                                 (((int)local_328 >> 5 & 1U) +
                                                 ((int)local_320 >> 5 & 1U) * 2) * 2) * 4),
                       iVar4 == 0)) ||
                      ((iVar4 = *(int *)(iVar4 + (((int)local_324 >> 4 & 1U) +
                                                 (((int)local_328 >> 4 & 1U) +
                                                 ((int)local_320 >> 4 & 1U) * 2) * 2) * 4),
                       iVar4 == 0 ||
                       (iVar4 = *(int *)(iVar4 + (((int)local_324 >> 3 & 1U) +
                                                 (((int)local_328 >> 3 & 1U) +
                                                 ((int)local_320 >> 3 & 1U) * 2) * 2) * 4),
                       iVar4 == 0)))) ||
                     ((iVar4 = *(int *)(iVar4 + (((int)local_324 >> 2 & 1U) +
                                                (((int)local_328 >> 2 & 1U) +
                                                ((int)local_320 >> 2 & 1U) * 2) * 2) * 4),
                      iVar4 == 0 ||
                      ((iVar4 = *(int *)(iVar4 + (((int)local_324 >> 1 & 1U) +
                                                 (((int)local_328 >> 1 & 1U) +
                                                 ((int)local_320 >> 1 & 1U) * 2) * 2) * 4),
                       iVar4 == 0 ||
                       (iVar4 = *(int *)(iVar4 + ((local_324 & 1) +
                                                 ((local_328 & 1) + (local_320 & 1) * 2) * 2) * 4),
                       iVar4 == 0)))))) {
                    uVar6 = FUN_005d90e0(local_320,local_328,local_324,iVar3);
                  }
                  else {
                    uVar6 = iVar4 - 1;
                  }
                  *local_334 = (byte)uVar6;
                  if ((uVar6 & 0xff) == local_31c) {
                    *local_334 = (byte)uVar6 ^ 1;
                  }
                }
                local_334 = local_334 + 1;
                local_32c = local_32c + -1;
              } while (local_32c != 0);
              local_32c = 0;
            }
            local_330 = local_330 + local_310;
            local_334 = local_334 + (*(int *)(param_3 + 8) - param_5);
            local_318 = local_318 + -1;
          } while (local_318 != 0);
          local_318 = 0;
        }
      }
    }
    else {
      local_30c = *(code **)(iVar4 + 0x44);
      if (param_6 != 0) {
        local_32c = param_6;
        do {
          if (param_5 != 0) {
            local_318 = param_5;
            do {
              (*local_30c)(&local_330,&local_320,&local_328,&local_324,&local_314);
              if (local_314 < 0x80) {
                *local_334 = (byte)local_31c;
              }
              else {
                iVar4 = *(int *)(*(int *)(iVar3 + 4) +
                                (((int)local_324 >> 7 & 1U) +
                                (((int)local_328 >> 7 & 1U) + ((int)local_320 >> 7 & 1U) * 2) * 2) *
                                4);
                if ((((iVar4 == 0) ||
                     (iVar4 = *(int *)(iVar4 + (((int)local_324 >> 6 & 1U) +
                                               (((int)local_328 >> 6 & 1U) +
                                               ((int)local_320 >> 6 & 1U) * 2) * 2) * 4), iVar4 == 0
                     )) || (iVar4 = *(int *)(iVar4 + (((int)local_324 >> 5 & 1U) +
                                                     (((int)local_328 >> 5 & 1U) +
                                                     ((int)local_320 >> 5 & 1U) * 2) * 2) * 4),
                           iVar4 == 0)) ||
                   (((iVar4 = *(int *)(iVar4 + (((int)local_324 >> 4 & 1U) +
                                               (((int)local_328 >> 4 & 1U) +
                                               ((int)local_320 >> 4 & 1U) * 2) * 2) * 4), iVar4 == 0
                     || (iVar4 = *(int *)(iVar4 + (((int)local_324 >> 3 & 1U) +
                                                  (((int)local_328 >> 3 & 1U) +
                                                  ((int)local_320 >> 3 & 1U) * 2) * 2) * 4),
                        iVar4 == 0)) ||
                    ((iVar4 = *(int *)(iVar4 + (((int)local_324 >> 2 & 1U) +
                                               (((int)local_328 >> 2 & 1U) +
                                               ((int)local_320 >> 2 & 1U) * 2) * 2) * 4), iVar4 == 0
                     || ((iVar4 = *(int *)(iVar4 + (((int)local_324 >> 1 & 1U) +
                                                   (((int)local_328 >> 1 & 1U) +
                                                   ((int)local_320 >> 1 & 1U) * 2) * 2) * 4),
                         iVar4 == 0 ||
                         (iVar4 = *(int *)(iVar4 + ((local_324 & 1) +
                                                   ((local_328 & 1) + (local_320 & 1) * 2) * 2) * 4)
                         , iVar4 == 0)))))))) {
                  uVar6 = FUN_005d90e0(local_320,local_328,local_324,iVar3);
                }
                else {
                  uVar6 = iVar4 - 1;
                }
                *local_334 = (byte)uVar6;
                if ((uVar6 & 0xff) == local_31c) {
                  *local_334 = (byte)uVar6 ^ 1;
                }
              }
              local_334 = local_334 + 1;
              local_318 = local_318 + -1;
            } while (local_318 != 0);
            local_318 = 0;
          }
          local_330 = local_330 + local_310;
          local_334 = local_334 + (*(int *)(param_3 + 8) - param_5);
          local_32c = local_32c + -1;
        } while (local_32c != 0);
        local_32c = 0;
      }
    }
  }
  FUN_005d94a0(iVar3);
  return 1;
}

