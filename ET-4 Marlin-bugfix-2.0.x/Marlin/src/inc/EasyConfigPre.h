/**
 * Author: David Terán
 * telegram: @davidtgbe
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */


#pragma once

#define ET_MODEL_ET4                (1UL << 1)
#define ET_MODEL_ET4X               (1UL << 2) 
#define ET_MODEL_ET4_PLUS           (1UL << 3)
#define ET_MODEL_ET4_PRO            (1UL << 4)
#define ET_MODEL_ET5                (1UL << 5)
#define ET_MODEL_ET5X               (1UL << 6)
#define ET_MODEL_ET5_PRO			(1UL << 7)

#define ET_SERIES_4          		(ET_MODEL_ET4 | ET_MODEL_ET4_PLUS | ET_MODEL_ET4X | ET_MODEL_ET4_PRO)
#define ET_SERIES_5          		(ET_MODEL_ET5 | ET_MODEL_ET5X | ET_MODEL_ET5_PRO)

#define ET_LV_NONE					(1UL << 1)
#define ET_LV_BLTOUCH 				(1UL << 2)
#define ET_LV_FILM_STRIP 			(1UL << 3)
#define ET_LV_MOUNTED_PROBE 		(1UL << 4)

#define ET_MOD_NONE		    		(1UL << 1)
#define ET_MOD_V6		    		(1UL << 2)
#define ET_MOD_BMG		    		(1UL << 3)
#define ET_MOD_BMG_MINI	    		(1UL << 4)

#define ET_BOARD_SILENT	    		(1UL << 1)
#define ET_BOARD_NOISY	    		(1UL << 2)

#define ET_Z_HOMING_DIR_UP   		(1UL << 1)	
#define ET_Z_HOMING_DIR_DOWN 		(1UL << 2)	

#define ET_Z_ENDSTOP_POSTION_NONE   (1UL << 1)
#define ET_Z_ENDSTOP_POSTION_TOP    (1UL << 2)
#define ET_Z_ENDSTOP_POSTION_BOTTOM (1UL << 3)