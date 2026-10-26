/*
 * FUN_0060ca3d at 0060ca3d
 * undefined FUN_0060ca3d(void)
 * Address ranges: 0060ca3d-0060cb18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060ca3d(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_0070ff50._2_2_) {
    if (local_24.wHour == (WORD)DAT_0070ff50) {
      if (local_24.wDay == DAT_0070ff4c._2_2_) {
        if (local_24.wMonth == DAT_0070ff48._2_2_) {
          if (local_24.wYear == (WORD)DAT_0070ff48) goto LAB_0060cae7;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_0070ff40 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_0070ff40 = 1;
  }
  else {
    DAT_0070ff40 = 0;
  }
  DAT_0070ff48._0_2_ = local_24.wYear;
  DAT_0070ff48._2_2_ = local_24.wMonth;
  DAT_0070ff4c._0_2_ = local_24.wDayOfWeek;
  DAT_0070ff4c._2_2_ = local_24.wDay;
  DAT_0070ff50._0_2_ = local_24.wHour;
  DAT_0070ff50._2_2_ = local_24.wMinute;
  DAT_0070ff54._0_2_ = local_24.wSecond;
  DAT_0070ff54._2_2_ = local_24.wMilliseconds;
LAB_0060cae7:
  uVar2 = FUN_0061838c(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_0070ff40);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}

